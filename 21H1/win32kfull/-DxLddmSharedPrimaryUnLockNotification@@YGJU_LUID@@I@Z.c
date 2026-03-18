/*
 * XREFs of ?DxLddmSharedPrimaryUnLockNotification@@YGJU_LUID@@I@Z @ 0x1D32E2
 * Callers:
 *     _NtGdiDdDDISharedPrimaryUnLockNotification@4 @ 0x1D46C4 (_NtGdiDdDDISharedPrimaryUnLockNotification@4.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QBEHXZ @ 0xB23BC (-bLddmDriver@PDEVOBJ@@QBEHXZ.c)
 *     _UserRedrawDesktop@0 @ 0x19D89E (_UserRedrawDesktop@0.c)
 *     _vSpUnTearDownSprites@12 @ 0x1E3F3E (_vSpUnTearDownSprites@12.c)
 */

int __userpurge DxLddmSharedPrimaryUnLockNotification@<eax>(int a1@<ecx>, struct _LUID a2, unsigned int a3)
{
  int v3; // esi
  int v4; // ebx
  _DWORD *i; // eax
  PDEVOBJ *v6; // ecx
  _DWORD *v7; // esi
  unsigned int CurrentProcessId; // eax
  int ProcessEntry; // eax
  int v10; // esi
  _DWORD *v11; // eax
  int v12; // ecx
  void (__stdcall *v13)(_DWORD, int); // edx
  _DWORD *v15; // edi
  int v17; // [esp+10h] [ebp-10h] BYREF
  _DWORD *v18; // [esp+14h] [ebp-Ch] BYREF
  int v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h]

  v20 = a1;
  v3 = 0;
  v19 = 0;
  v4 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)((char *)&v17 + 3));
  for ( i = (_DWORD *)hdevEnumerate(0); ; i = (_DWORD *)hdevEnumerate(v15) )
  {
    v15 = i;
    if ( !i )
      break;
    v18 = i;
    if ( ((unsigned int)&loc_20400 & i[6]) == 0
      && PDEVOBJ::bLddmDriver((PDEVOBJ *)&v18)
      && a2.LowPart == PDEVOBJ::pAdapterLuid(v6)->LowPart
      && a2.HighPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v18)->HighPart
      && *(_DWORD *)(v18[458] + 212) == v20 )
    {
      GreLockVisRgn(v18);
      GreLockSprite(v18);
      GreLockDisplayDevice(v18);
      v7 = v18 + 466;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      ProcessEntry = DxLddmFindProcessEntry(v7, CurrentProcessId & 0xFFFFFFFC);
      v10 = ProcessEntry;
      if ( ProcessEntry )
      {
        if ( *(_DWORD *)(ProcessEntry + 12) )
        {
          v11 = v18;
          v12 = v10 + 20;
          v13 = (void (__stdcall *)(_DWORD, int))v18[470];
          if ( v13 )
          {
            v13(v18[277], v10 + 20);
            v11 = v18;
            v12 = v10 + 20;
          }
          --v11[468];
          if ( (*(_DWORD *)(v10 + 12))-- == 1 )
          {
            vSpUnTearDownSprites(v18, v12, 1);
            if ( *(_DWORD *)(v10 + 36) != giVisRgnUniqueness )
            {
              v3 = 1;
              v19 = 1;
LABEL_16:
              GreUnlockDisplayDevice(v18);
              GreUnlockSprite(v18);
              GreUnlockVisRgn(v18);
              continue;
            }
          }
        }
      }
      else
      {
        v4 = -1073741811;
      }
      v3 = v19;
      goto LABEL_16;
    }
    v3 = v19;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  if ( v3 )
    UserRedrawDesktop();
  return v4;
}
