/*
 * XREFs of PiControlQueryAndRemoveDevice @ 0x140959330
 * Callers:
 *     <none>
 * Callees:
 *     PiControlAllocateBufferForUserModeCaller @ 0x1402DE7E4 (PiControlAllocateBufferForUserModeCaller.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1402DF554 (PiControlFreeUserModeCallersBuffer.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14065FA0C (PnpQueueQueryAndRemoveEvent.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14077C610 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiControlQueryAndRemoveDevice(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  __int16 v4; // cx
  __int64 *v7; // rdi
  int v8; // eax
  __int64 v9; // r9
  unsigned int v10; // edx
  int BufferForUserModeCaller; // esi
  int UserModeCallersCopy; // eax
  _WORD *v14; // [rsp+30h] [rbp-20h] BYREF
  __int128 v15; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  v15 = 0LL;
  WORD1(v15) = v4;
  LOWORD(v15) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  v14 = 0LL;
  v7 = (__int64 *)(a2 + 12);
  *((_QWORD *)&v15 + 1) = 0LL;
  v8 = *((_DWORD *)a2 + 8);
  if ( v8 && (v9 = *v7) != 0 )
  {
    v10 = 2 * v8;
  }
  else
  {
    *((_DWORD *)a2 + 8) = 0;
    v9 = *v7;
    v10 = 0;
  }
  v16 = v10;
  BufferForUserModeCaller = PiControlAllocateBufferForUserModeCaller((__int64 *)&v14, v10, a4, v9);
  if ( BufferForUserModeCaller >= 0 )
  {
    BufferForUserModeCaller = PiControlMakeUserModeCallersCopy(
                                (void **)&v15 + 1,
                                *((void **)a2 + 1),
                                (unsigned __int16)v15,
                                2u,
                                a4,
                                1);
    if ( BufferForUserModeCaller >= 0 )
    {
      BufferForUserModeCaller = PnpQueueQueryAndRemoveEvent(
                                  (unsigned __int16 *)&v15,
                                  (char *)a2 + 20,
                                  v14,
                                  &v16,
                                  *((_DWORD *)a2 + 4),
                                  0);
      if ( v14 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a2 + 3, v14, 2 * *((_DWORD *)a2 + 8), 2u, a4, 0);
        if ( UserModeCallersCopy < 0 )
          BufferForUserModeCaller = UserModeCallersCopy;
      }
      *((_DWORD *)a2 + 8) = v16 >> 1;
    }
  }
  PiControlFreeUserModeCallersBuffer(a4, *((void **)&v15 + 1));
  PiControlFreeUserModeCallersBuffer(a4, v14);
  return (unsigned int)BufferForUserModeCaller;
}
