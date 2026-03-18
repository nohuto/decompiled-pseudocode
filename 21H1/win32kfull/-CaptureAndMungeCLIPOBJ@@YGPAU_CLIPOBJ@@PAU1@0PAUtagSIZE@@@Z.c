/*
 * XREFs of ?CaptureAndMungeCLIPOBJ@@YGPAU_CLIPOBJ@@PAU1@0PAUtagSIZE@@@Z @ 0x216257
 * Callers:
 *     ?GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z @ 0x21637D (-GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

struct _CLIPOBJ *__userpurge CaptureAndMungeCLIPOBJ@<eax>(
        int a1@<edx>,
        ULONG a2@<ecx>,
        struct _CLIPOBJ *a3,
        struct _CLIPOBJ *a4,
        struct tagSIZE *a5)
{
  const void *v5; // esi
  char v6; // bl
  _DWORD v8[6]; // [esp+10h] [ebp-30h] BYREF
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v5 = (const void *)a2;
  memset(v8, 0, sizeof(v8));
  if ( a2 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( a2 >= _MmUserProbeAddress )
      v5 = (const void *)_MmUserProbeAddress;
    qmemcpy(v8, v5, sizeof(v8));
    ms_exc.registration.TryLevel = -2;
    if ( a1 )
    {
      v6 = v8[5];
      if ( LOBYTE(v8[5]) )
      {
        if ( LOBYTE(v8[5]) != 1 )
          return 0;
        if ( a3 )
        {
          if ( v8[1] < 0 )
            v8[1] = 0;
          if ( v8[2] < 0 )
            v8[2] = 0;
          if ( (signed int)a3->iUniq < v8[3] )
            v8[3] = a3->iUniq;
          if ( a3->rclBounds.left < v8[4] )
            v8[4] = a3->rclBounds.left;
        }
        *(_DWORD *)(a1 + 4) = v8[1];
        *(_DWORD *)(a1 + 8) = v8[2];
        *(_DWORD *)(a1 + 12) = v8[3];
        *(_DWORD *)(a1 + 16) = v8[4];
      }
      *(_BYTE *)(a1 + 20) = v6;
    }
  }
  return (struct _CLIPOBJ *)a1;
}
