/*
 * XREFs of ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00BA548
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B8358 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvDisableMDEV @ 0x1C00B9430 (DrvDisableMDEV.c)
 * Callees:
 *     DrvDxgkDisplayOnOff @ 0x1C004FC20 (DrvDxgkDisplayOnOff.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C00B8F98 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CBCE8 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall DrvDisableMDEVChildren(struct _MDEV *a1, int a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  int v10; // esi
  __int64 v11; // rax
  __int64 v13; // rbp
  __int64 *v14; // rdi

  v4 = a2;
  v6 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdTrace(v6);
  v9 = 0LL;
  v10 = 1;
  if ( *((_DWORD *)a1 + 5) )
  {
    do
    {
      if ( (_DWORD)v4 )
      {
        v13 = 56LL * (unsigned int)v9;
        v10 = DrvDisableDisplay(*(HSEMAPHORE **)((char *)a1 + v13 + 40), 0LL, v8);
        if ( !v10 )
          goto LABEL_8;
        DrvDxgkDisplayOnOff(*(_QWORD *)((char *)a1 + v13 + 40), 0, a3);
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < *((_DWORD *)a1 + 5) );
    if ( v10 )
      goto LABEL_5;
LABEL_8:
    if ( (_DWORD)v9 )
    {
      v14 = (__int64 *)((char *)a1 + 40);
      do
      {
        if ( (_DWORD)v4 )
        {
          DrvDxgkDisplayOnOff(*v14, 1u, a3);
          while ( !(unsigned int)DrvEnableDisplay((HDEV)*v14) )
            ;
        }
        v14 += 7;
        --v9;
      }
      while ( v9 );
    }
  }
LABEL_5:
  v11 = WdLogNewEntry5_WdTrace(v7);
  *(_QWORD *)(v11 + 24) = v10;
  WdLogEvent5_WdTrace(v11);
  return (unsigned int)v10;
}
