/*
 * XREFs of ?vTryToCacheRealization@@YGXPAVEBRUSHOBJ@@PAVRBRUSH@@PAVBRUSH@@H@Z @ 0x96A78
 * Callers:
 *     ?pvGetEngRbrush@@YGPAXPAU_BRUSHOBJ@@@Z @ 0x95952 (-pvGetEngRbrush@@YGPAXPAU_BRUSHOBJ@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YGPAXPAU_BRUSHOBJ@@@Z @ 0x1CC6D1 (-BRUSHOBJ_pvGetRbrushUMPD@@YGPAXPAU_BRUSHOBJ@@@Z.c)
 *     _BRUSHOBJ_pvGetRbrush@4 @ 0x1CC89F (_BRUSHOBJ_pvGetRbrush@4.c)
 * Callees:
 *     <none>
 */

void __userpurge vTryToCacheRealization(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct EBRUSHOBJ *a3,
        struct RBRUSH *a4,
        struct BRUSH *a5,
        int a6)
{
  int v8; // eax
  unsigned int v9; // eax
  struct EBRUSHOBJ *v11; // [esp+18h] [ebp+8h]

  v11 = (struct EBRUSHOBJ *)HmgPentryFromPobj(a3);
  if ( G_fServiceSession
    || (*(_DWORD *)a3 & 0x800000) == 0
    || !a1[3]
    || (*((_DWORD *)v11 + 1) & 0xFFFFFFFE) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    *a1 = 1;
    if ( !*((_DWORD *)a3 + 17) && !_InterlockedExchange((volatile __int32 *)a3 + 17, 1) )
    {
      *a1 = 2;
      v8 = *((_DWORD *)a3 + 6);
      if ( a4 == (struct RBRUSH *)1 )
        v9 = v8 | 0x40000000;
      else
        v9 = v8 & 0xBFFFFFFF;
      *((_DWORD *)a3 + 6) = v9;
      *((_DWORD *)a3 + 19) = a2[9];
      *((_DWORD *)a3 + 20) = a2[7];
      *((_DWORD *)a3 + 21) = a2[6];
      *((_DWORD *)a3 + 23) = a1;
      *((_DWORD *)a3 + 24) = *(_DWORD *)(a2[14] + 28);
      *((_DWORD *)a3 + 22) = a2[4];
      _InterlockedExchange((volatile __int32 *)a3 + 18, a2[8]);
    }
  }
}
