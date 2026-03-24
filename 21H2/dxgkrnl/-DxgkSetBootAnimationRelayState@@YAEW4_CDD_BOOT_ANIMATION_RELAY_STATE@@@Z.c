/*
 * XREFs of ?DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z @ 0x1C016DD20
 * Callers:
 *     DxgDetermineBootImageMode @ 0x1C0192624 (DxgDetermineBootImageMode.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

char __fastcall DxgkSetBootAnimationRelayState(__int64 a1, __int64 a2)
{
  int v2; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  char v11; // bl
  bool v13; // zf
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGGLOBAL *)((char *)Global + 1504), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v8 = *((_DWORD *)DXGGLOBAL::GetGlobal(v5, v4) + 373);
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
        {
LABEL_5:
          v11 = 0;
          goto LABEL_6;
        }
        v13 = v2 == 4;
      }
      else
      {
        v13 = v2 == 3;
      }
    }
    else
    {
      v13 = v2 == 2;
    }
    if ( !v13 )
      goto LABEL_5;
  }
  else if ( ((v2 - 1) & 0xFFFFFFFD) != 0 )
  {
    goto LABEL_5;
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 373) = v2;
  v11 = 1;
LABEL_6:
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14, v6);
  return v11;
}
