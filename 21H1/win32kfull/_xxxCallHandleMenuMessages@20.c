/*
 * XREFs of _xxxCallHandleMenuMessages@20 @ 0x1978D8
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxMNDragOver@8 @ 0x1A7669 (_xxxMNDragOver@8.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _xxxMNEndMenuState@4 @ 0x1847C9 (_xxxMNEndMenuState@4.c)
 *     _xxxEndMenuLoop@8 @ 0x195235 (_xxxEndMenuLoop@8.c)
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     _MNCheckButtonDownState@4 @ 0x1975B5 (_MNCheckButtonDownState@4.c)
 */

int __fastcall xxxCallHandleMenuMessages(int *a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v7; // ebx
  int v8; // edi
  int v9; // edx
  int v11; // [esp-4h] [ebp-34h]
  _DWORD v12[2]; // [esp+Ch] [ebp-24h] BYREF
  _DWORD v13[3]; // [esp+14h] [ebp-1Ch] BYREF
  int v14; // [esp+20h] [ebp-10h]
  int v15; // [esp+24h] [ebp-Ch]
  int v16; // [esp+28h] [ebp-8h]
  int v17; // [esp+2Ch] [ebp-4h]

  v15 = 0;
  v16 = 0;
  v17 = 0;
  v7 = a1[1];
  if ( (v7 & 0x4008) == 0x4008 )
  {
    MNCheckButtonDownState(a1);
    v7 = a1[1];
  }
  if ( a2 )
    v13[0] = *a2;
  else
    v13[0] = 0;
  v13[2] = a4;
  v13[1] = a3;
  if ( (unsigned int)(a3 - 512) > 0xE )
    v14 = a5;
  else
    v14 = (unsigned __int16)(a5 + *(_WORD *)(a2[5] + 68)) | ((unsigned __int16)(*(_WORD *)(a2[5] + 72) + HIWORD(a5)) << 16);
  v11 = *a1;
  a1[1] = v7 | 0x200;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v12, v11);
  v8 = xxxHandleMenuMessages(v13, a1, (int)v12);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12);
  v9 = a1[1];
  a1[1] = v9 & 0xFFFFFDFF;
  if ( v8 && (v9 & 0x100) != 0 && ((v9 & 4) == 0 || (*(_DWORD *)*a1 & 0x8000) != 0) )
  {
    xxxEndMenuLoop((int)a1, *a1);
    xxxMNEndMenuState(a1);
  }
  return v8;
}
