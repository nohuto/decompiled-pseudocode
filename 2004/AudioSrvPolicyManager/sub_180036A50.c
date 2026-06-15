/*
 * XREFs of sub_180036A50 @ 0x180036A50
 * Callers:
 *     sub_180036BEC @ 0x180036BEC (sub_180036BEC.c)
 * Callees:
 *     sub_180036DC0 @ 0x180036DC0 (sub_180036DC0.c)
 *     memset @ 0x18003A7D8 (memset.c)
 */

ULONG sub_180036A50(HANDLE TokenHandle, _QWORD *a2, const UNICODE_STRING **a3, ...)
{
  NTSTATUS InformationToken; // eax
  ULONG v8; // edi
  void *v9; // rbx
  PVOID Heap; // rax
  PVOID v11; // rsi
  int v12; // eax
  unsigned int v13; // ebp
  const UNICODE_STRING *v14; // r14
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  size_t Size; // [rsp+88h] [rbp+20h] BYREF
  va_list Sizea; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(Sizea, a3);
  Size = va_arg(va1, _QWORD);
  InformationToken = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, 0LL, 0, (PULONG)Sizea);
  if ( InformationToken == -1073741789 )
  {
    v8 = 0;
    if ( is_mul_ok((unsigned int)Size, 0x10uLL) )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 16LL * (unsigned int)Size);
      v11 = Heap;
      v9 = Heap;
      if ( Heap )
      {
        memset(Heap, 0, (unsigned int)Size);
        v12 = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, v11, Size, (PULONG)Sizea);
        if ( v12 >= 0 )
        {
          if ( *((_DWORD *)v11 + 1)
            && (RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID"), v13 = 0, *((_DWORD *)v11 + 1)) )
          {
            while ( 1 )
            {
              v14 = (const UNICODE_STRING *)(*((_QWORD *)v11 + 1) + 40LL * v13);
              if ( !RtlCompareUnicodeString(&DestinationString, v14, 1u) )
                break;
              if ( ++v13 >= *((_DWORD *)v11 + 1) )
                goto LABEL_15;
            }
            *a3 = v14;
            v9 = 0LL;
            *a2 = v11;
          }
          else
          {
LABEL_15:
            v8 = 1168;
          }
        }
        else
        {
          v8 = RtlNtStatusToDosErrorNoTeb(v12);
        }
        goto LABEL_16;
      }
    }
    else
    {
      v9 = 0LL;
    }
    v8 = 8;
LABEL_16:
    sub_180036DC0(v9);
    return v8;
  }
  if ( InformationToken )
    return RtlNtStatusToDosErrorNoTeb(InformationToken);
  else
    return 1359;
}
