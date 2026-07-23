/*
 * XREFs of PiControlGetRelatedDevice @ 0x14060C8B0
 * Callers:
 *     <none>
 * Callees:
 *     PiControlAllocateBufferForUserModeCaller @ 0x140240C80 (PiControlAllocateBufferForUserModeCaller.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140252870 (PiControlFreeUserModeCallersBuffer.c)
 *     PiGetRelatedDevice @ 0x14060C9F4 (PiGetRelatedDevice.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14062A4E0 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiControlGetRelatedDevice(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  __int16 v4; // cx
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // edx
  int UserModeCallersCopy; // edi
  int v11; // eax
  char v13; // [rsp+20h] [rbp-30h]
  int v14; // [rsp+20h] [rbp-30h]
  void *v15; // [rsp+30h] [rbp-20h] BYREF
  __int128 v16; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  v16 = 0LL;
  WORD1(v16) = v4;
  LOWORD(v16) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  v15 = 0LL;
  *((_QWORD *)&v16 + 1) = 0LL;
  v7 = *((_QWORD *)a2 + 3);
  if ( v7 && (v8 = *((_DWORD *)a2 + 8)) != 0 )
    v9 = 2 * v8;
  else
    v9 = 0;
  v17 = v9;
  UserModeCallersCopy = PiControlAllocateBufferForUserModeCaller(&v15, v9, a4, v7);
  if ( UserModeCallersCopy >= 0 )
  {
    v13 = a4;
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy(
                            (char *)&v16 + 8,
                            *((_QWORD *)a2 + 1),
                            (unsigned __int16)v16,
                            2LL,
                            v13,
                            1);
    if ( UserModeCallersCopy >= 0 )
    {
      UserModeCallersCopy = PiGetRelatedDevice(&v16, v15, &v17, *((unsigned int *)a2 + 4));
      if ( v15 )
      {
        LOBYTE(v14) = a4;
        v11 = PiControlMakeUserModeCallersCopy(a2 + 12, v15, (unsigned int)(2 * *((_DWORD *)a2 + 8)), 2LL, v14, 0);
        if ( v11 < 0 )
          UserModeCallersCopy = v11;
      }
      *((_DWORD *)a2 + 8) = v17 >> 1;
    }
  }
  PiControlFreeUserModeCallersBuffer(a4, *((void **)&v16 + 1));
  PiControlFreeUserModeCallersBuffer(a4, v15);
  return (unsigned int)UserModeCallersCopy;
}
