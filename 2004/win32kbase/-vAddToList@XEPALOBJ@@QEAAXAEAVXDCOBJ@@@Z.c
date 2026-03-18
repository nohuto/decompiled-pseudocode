/*
 * XREFs of ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0027118
 * Callers:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C002730C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0027500 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C009249C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall XEPALOBJ::vAddToList(XEPALOBJ *this, struct XDCOBJ *a2)
{
  __int64 v3; // r8
  HDC v4; // rdx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(struct PALETTE **)this == ppalDefault )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 984LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)a2 + 992LL) = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)this + 56LL));
    v3 = *(_QWORD *)a2;
    *(_QWORD *)(*(_QWORD *)a2 + 984LL) = *(_QWORD *)(*(_QWORD *)this + 40LL);
    *(_QWORD *)(*(_QWORD *)this + 40LL) = **(_QWORD **)a2;
    *(_QWORD *)(*(_QWORD *)a2 + 992LL) = 0LL;
    v4 = *(HDC *)(*(_QWORD *)a2 + 984LL);
    if ( v4 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v5, v4, v3);
      if ( v5[0] )
      {
        *(_QWORD *)(v5[0] + 992LL) = **(_QWORD **)a2;
        XDCOBJ::vAltUnlockFast((XDCOBJ *)v5);
      }
    }
  }
}
