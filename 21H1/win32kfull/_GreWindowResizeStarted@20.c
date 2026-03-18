/*
 * XREFs of _GreWindowResizeStarted@20 @ 0x1CEC76
 * Callers:
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 * Callees:
 *     _DwmAsyncUpdateSprite@44 @ 0x2044E (_DwmAsyncUpdateSprite@44.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     ??0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z @ 0x2464E (--0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z @ 0x1CCD3C (-CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z.c)
 *     ?UpdateWindowResizeTelemetry@@YGXPAVDWMSPRITE@@H@Z @ 0x1CD5C4 (-UpdateWindowResizeTelemetry@@YGXPAVDWMSPRITE@@H@Z.c)
 */

int __fastcall GreWindowResizeStarted(int a1, void *a2, PVOID Object, unsigned int *a4, unsigned int *a5)
{
  int v5; // ebx
  struct PDEVOBJ *v7; // ecx
  union _LARGE_INTEGER *v8; // esi
  int v9; // eax
  int v10; // edx
  union _LARGE_INTEGER *v11; // eax
  int *LowPart; // eax
  int v13; // eax
  int v14; // eax
  char v15; // al
  PVOID v16; // edi
  PVOID v17; // edi
  int v18; // edi
  void *v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // ecx
  int v23; // [esp-24h] [ebp-48h]
  int v24; // [esp+0h] [ebp-24h]
  int *v25; // [esp+4h] [ebp-20h]
  int v26; // [esp+Ch] [ebp-18h] BYREF
  char v27[4]; // [esp+10h] [ebp-14h] BYREF
  int *v28; // [esp+14h] [ebp-10h]
  unsigned int v29; // [esp+18h] [ebp-Ch]
  unsigned int v30; // [esp+1Ch] [ebp-8h] BYREF
  unsigned __int8 v31; // [esp+23h] [ebp-1h]

  v29 = gdwDwmResizeOptimizationOptions & 1;
  v5 = 0;
  v30 = gdwDwmResizeOptimizationOptions & 2;
  v26 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  if ( g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v27, v7, 0, 0);
    GreAcquireSemaphore(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
    v8 = 0;
    v9 = DWMALTSPRITEREF::hspLookupWindow(a2);
    if ( v9 )
    {
      LOBYTE(v10) = 15;
      v11 = (union _LARGE_INTEGER *)HmgLock(v9, v10);
      v8 = v11;
      if ( !v11 )
      {
LABEL_30:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
        GreReleaseSemaphoreInternal(_ghsemDwmState);
        DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v27);
        goto LABEL_31;
      }
      LowPart = (int *)v11[17].LowPart;
      v28 = LowPart;
      if ( LowPart && (v13 = LowPart[28]) != 0 )
        v14 = v13 - 16;
      else
        v14 = 0;
      if ( v14 && (*(_DWORD *)(v14 + 156) || (*(_BYTE *)(v14 + 76) & 1) != 0) )
      {
        v15 = 1;
        v31 = 1;
      }
      else
      {
        v15 = 0;
        v31 = 0;
      }
      v16 = Object;
      if ( v29 && v15 || Object && v30 )
      {
        if ( v8[9].HighPart >= 1 )
          CheckAndProcessWindowResizeComplete(1, (int *)v8, (struct DWMSPRITE *)Object, 0, v24, v25);
        v8[9].HighPart = v31 + 1;
        v8[10].LowPart = 0;
        UpdateWindowResizeTelemetry(v8, 1);
        if ( v16 && v30 )
        {
          Object = 0;
          if ( (int)DCompositionCreateSynchronizationObject(&Object) >= 0 )
          {
            v17 = Object;
            v30 = 0;
            if ( (int)CompositionObject::OpenDwmHandle((CompositionObject *)Object, (void **)&v30) < 0 )
            {
              ObfDereferenceObject(v17);
            }
            else
            {
              v8[8].HighPart = v30;
              v8[8].LowPart = (DWORD)v17;
              v18 = v8->LowPart;
              v8[10].LowPart = 1;
              v8[10].HighPart = 1;
              v23 = *v28;
              v19 = (void *)UserReferenceDwmApiPort();
              DwmAsyncUpdateSprite(v19, v18, v23, 512, 0, 0, 0, 0, 0, 0, 0);
            }
          }
          v20 = gdwDwmResizeTimeoutModern;
          v21 = gdwDwmResizeOptimizationOptions & 8;
        }
        else
        {
          v20 = gdwDwmResizeTimeoutGdi;
          v21 = gdwDwmResizeOptimizationOptions & 4;
        }
        v5 = 1;
        *a4 = v21;
        *a5 = v20;
      }
    }
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)&v8[1]);
    goto LABEL_30;
  }
LABEL_31:
  SEMOBJ::vUnlock((SEMOBJ *)&v26);
  return v5;
}
