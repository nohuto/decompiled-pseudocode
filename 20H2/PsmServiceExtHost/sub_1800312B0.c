/*
 * XREFs of sub_1800312B0 @ 0x1800312B0
 * Callers:
 *     sub_18003123C @ 0x18003123C (sub_18003123C.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 *     memset @ 0x18004683A (memset.c)
 */

NTSTATUS __fastcall sub_1800312B0(HANDLE TokenHandle, char *a2)
{
  NTSTATUS result; // eax
  void **Heap; // r14
  NTSTATUS TokenHostIdAsUlong64; // ebx
  void *v7; // rbx
  ULONG v8; // eax
  __int64 v9; // rdi
  int v10; // esi
  int v11; // r15d
  __int64 v12; // rdx
  _WORD *v13; // rax
  __int16 v14; // cx
  ULONG TokenInformationLength; // [rsp+30h] [rbp-278h] BYREF
  int v16; // [rsp+34h] [rbp-274h] BYREF
  int v17; // [rsp+38h] [rbp-270h] BYREF
  _QWORD v18[70]; // [rsp+40h] [rbp-268h] BYREF

  memset(v18, 0, 0x228uLL);
  v16 = 464;
  result = PsmGetKeyFromToken(TokenHandle, v18, &v16, 0LL);
  if ( result >= 0 )
  {
    result = NtQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
    if ( (int)(result + 0x80000000) < 0 || result == -1073741789 )
    {
      Heap = (void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, TokenInformationLength);
      if ( Heap )
      {
        TokenHostIdAsUlong64 = NtQueryInformationToken(
                                 TokenHandle,
                                 TokenUser,
                                 Heap,
                                 TokenInformationLength,
                                 &TokenInformationLength);
        if ( TokenHostIdAsUlong64 >= 0 )
        {
          v7 = *Heap;
          memset(&v18[58], 0, 0x44uLL);
          v8 = RtlLengthSid(v7);
          memcpy(&v18[58], v7, v8);
          TokenHostIdAsUlong64 = NtQueryInformationToken(
                                   TokenHandle,
                                   TokenSessionId,
                                   (char *)&v18[66] + 4,
                                   4u,
                                   &TokenInformationLength);
          if ( TokenHostIdAsUlong64 >= 0 )
          {
            TokenHostIdAsUlong64 = PsmQueryBackgroundActivationType(TokenHandle, &v17);
            if ( TokenHostIdAsUlong64 >= 0 )
            {
              LODWORD(v18[67]) = 1 << v17;
              TokenHostIdAsUlong64 = RtlQueryTokenHostIdAsUlong64(TokenHandle, &v18[68]);
              if ( TokenHostIdAsUlong64 >= 0 )
              {
                v9 = v18[68];
                v10 = v18[67];
                v11 = HIDWORD(v18[66]);
                memset(a2, 0, 0x228uLL);
                v12 = 232LL;
                v13 = a2;
                while ( v12 != -2147483414 )
                {
                  v14 = *(_WORD *)((char *)v13 + (char *)v18 - a2);
                  if ( !v14 )
                    break;
                  *v13++ = v14;
                  if ( !--v12 )
                  {
                    --v13;
                    break;
                  }
                }
                TokenHostIdAsUlong64 = 0;
                *v13 = 0;
                RtlCopySid(0x44u, a2 + 464, &v18[58]);
                *((_DWORD *)a2 + 133) = v11;
                *((_DWORD *)a2 + 134) = v10;
                *((_QWORD *)a2 + 68) = v9;
              }
            }
          }
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return TokenHostIdAsUlong64;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
