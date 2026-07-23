/*
 * XREFs of PiControlQueryDeviceRelations @ 0x1408B3BD0
 * Callers:
 *     <none>
 * Callees:
 *     PiControlAllocateBufferForUserModeCaller @ 0x140240C80 (PiControlAllocateBufferForUserModeCaller.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140252870 (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14062A4E0 (PiControlMakeUserModeCallersCopy.c)
 *     PiQueryDeviceRelations @ 0x1408B41DC (PiQueryDeviceRelations.c)
 */

__int64 __fastcall PiControlQueryDeviceRelations(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  __int16 v4; // cx
  int v7; // eax
  __int64 v8; // r9
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
  v7 = *((_DWORD *)a2 + 5);
  v8 = *((_QWORD *)a2 + 3);
  if ( v7 && v8 )
    v9 = 2 * v7;
  else
    v9 = 0;
  v15 = v9;
  UserModeCallersCopy = PiControlAllocateBufferForUserModeCaller(&v13, v9, a4, v8);
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
      UserModeCallersCopy = PiQueryDeviceRelations(&v14, *((unsigned int *)a2 + 4), &v15, v13);
      if ( v13 )
      {
        v11 = PiControlMakeUserModeCallersCopy((void **)a2 + 3, v13, 2 * *((_DWORD *)a2 + 5), 2u, a4, 0);
        if ( v11 < 0 )
          UserModeCallersCopy = v11;
      }
      *((_DWORD *)a2 + 5) = v15 >> 1;
    }
  }
  PiControlFreeUserModeCallersBuffer(a4, v13);
  PiControlFreeUserModeCallersBuffer(a4, *((void **)&v14 + 1));
  return (unsigned int)UserModeCallersCopy;
}
