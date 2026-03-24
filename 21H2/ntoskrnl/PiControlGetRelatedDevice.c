/*
 * XREFs of PiControlGetRelatedDevice @ 0x1406AE010
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402647E0 (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlAllocateBufferForUserModeCaller @ 0x1402C27E0 (PiControlAllocateBufferForUserModeCaller.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406356D0 (PiControlMakeUserModeCallersCopy.c)
 *     PiGetRelatedDevice @ 0x1406AE154 (PiGetRelatedDevice.c)
 */

__int64 __fastcall PiControlGetRelatedDevice(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  __int16 v4; // cx
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // edx
  int UserModeCallersCopy; // edi
  int v11; // eax
  void *v13; // [rsp+30h] [rbp-20h] BYREF
  __int128 v14; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  v14 = 0LL;
  WORD1(v14) = v4;
  LOWORD(v14) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  v13 = 0LL;
  *((_QWORD *)&v14 + 1) = 0LL;
  v7 = *((_QWORD *)a2 + 3);
  if ( v7 && (v8 = *((_DWORD *)a2 + 8)) != 0 )
    v9 = 2 * v8;
  else
    v9 = 0;
  v15 = v9;
  UserModeCallersCopy = PiControlAllocateBufferForUserModeCaller(&v13, v9, a4, v7);
  if ( UserModeCallersCopy >= 0 )
  {
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy(
                            (void **)&v14 + 1,
                            *((void **)a2 + 1),
                            (unsigned __int16)v14,
                            2u,
                            a4,
                            1);
    if ( UserModeCallersCopy >= 0 )
    {
      UserModeCallersCopy = PiGetRelatedDevice(&v14, v13, &v15, *((unsigned int *)a2 + 4));
      if ( v13 )
      {
        v11 = PiControlMakeUserModeCallersCopy((void **)a2 + 3, v13, 2 * *((_DWORD *)a2 + 8), 2u, a4, 0);
        if ( v11 < 0 )
          UserModeCallersCopy = v11;
      }
      *((_DWORD *)a2 + 8) = v15 >> 1;
    }
  }
  PiControlFreeUserModeCallersBuffer(a4, *((void **)&v14 + 1));
  PiControlFreeUserModeCallersBuffer(a4, v13);
  return (unsigned int)UserModeCallersCopy;
}
