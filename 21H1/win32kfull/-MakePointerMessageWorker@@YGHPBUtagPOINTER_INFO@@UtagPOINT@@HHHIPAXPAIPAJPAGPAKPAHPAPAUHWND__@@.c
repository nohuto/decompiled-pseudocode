/*
 * XREFs of ?MakePointerMessageWorker@@YGHPBUtagPOINTER_INFO@@UtagPOINT@@HHHIPAXPAIPAJPAGPAKPAHPAPAUHWND__@@@Z @ 0x15AF28
 * Callers:
 *     ?MakePointerMessage@@YGHKIPAXPAIPAJPAGPAKPAHPAPAUHWND__@@@Z @ 0x15AEA9 (-MakePointerMessage@@YGHKIPAXPAIPAJPAGPAKPAHPAPAUHWND__@@@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _GetDPITransformationMonitor@12 @ 0x1510B9 (_GetDPITransformationMonitor@12.c)
 */

int __userpurge MakePointerMessageWorker@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        const struct tagPOINTER_INFO *a3,
        struct tagPOINT a4,
        int a5,
        int *a6,
        int *a7,
        _WORD *a8,
        _DWORD *a9,
        unsigned int *a10,
        int *a11,
        unsigned __int16 *a12,
        unsigned int *DPITransformationMonitor,
        int *a14,
        HWND *a15)
{
  unsigned int v15; // edi
  int v17; // ebx
  _DWORD *v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // edx
  int v24; // [esp+10h] [ebp-10h] BYREF
  int v25; // [esp+14h] [ebp-Ch]
  int v26; // [esp+18h] [ebp-8h]
  int v27; // [esp+1Ch] [ebp-4h]

  v26 = a1;
  v15 = 0;
  v17 = 1;
  v24 = 0;
  v25 = 0;
  if ( !a2 )
    return 0;
  v27 = *(unsigned __int16 *)(a2 + 4);
  if ( !GetAdjustedPointerPixelLocation(*(_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 28), a12, DPITransformationMonitor, &v24) )
  {
    v24 = *(_DWORD *)(a2 + 24);
    v25 = *(_DWORD *)(a2 + 28);
  }
  v19 = (_DWORD *)HMValidateHandleNoSecure(*(_DWORD *)(a2 + 20), 1);
  if ( v19 && (*(_DWORD *)(v19[5] + 184) & 0xF) != 2 )
  {
    DPITransformationMonitor = (unsigned int *)GetDPITransformationMonitor(v19, v24, v25);
    PhysicalToLogicalDPIPoint(&v24, &v24, 0, &DPITransformationMonitor);
  }
  if ( a4.y <= 0x24Bu )
  {
    if ( a4.y != 587 )
    {
      if ( a4.y == 528 )
      {
        v21 = ((unsigned __int16)v27 << 16) | 0x246;
        goto LABEL_18;
      }
      if ( a4.y > 0x240u )
      {
        if ( a4.y <= 0x243u )
        {
          v20 = (unsigned __int16)v26;
LABEL_17:
          v21 = (unsigned __int16)v27 | (v20 << 16);
LABEL_18:
          *a6 = v21;
          *a7 = (unsigned __int16)v24 | ((unsigned __int16)v25 << 16);
LABEL_31:
          *a8 = *(_WORD *)(a2 + 4);
          *a9 = *(_DWORD *)a2;
          if ( __PAIR64__(a4.x, (unsigned int)a3) )
            v15 = 1;
          v23 = *(_DWORD *)(a2 + 20);
          *a10 = v15;
          *a11 = v23;
          return v17;
        }
        if ( a4.y <= 0x244u || a4.y == 584 )
          return 0;
LABEL_27:
        v20 = *(_WORD *)(a2 + 12) & 0xE1F7;
        goto LABEL_17;
      }
      return 0;
    }
    v22 = (unsigned __int16)v27 | ((unsigned __int16)v26 << 16);
LABEL_30:
    *a6 = v22;
    *a7 = a5;
    goto LABEL_31;
  }
  if ( a4.y == 588 )
  {
    v22 = (unsigned __int16)v27;
    goto LABEL_30;
  }
  if ( a4.y == 592 )
  {
    v21 = (unsigned __int16)v27;
    goto LABEL_18;
  }
  if ( a4.y > 0x250u )
  {
    if ( a4.y <= 0x252u )
      goto LABEL_27;
    if ( a4.y == 595 )
      goto LABEL_31;
  }
  return 0;
}
