/*
 * XREFs of ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0276F2C
 * Callers:
 *     NtGdiDdDDISharedPrimaryUnLockNotification @ 0x1C0278CD0 (NtGdiDdDDISharedPrimaryUnLockNotification.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0050C74 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     UserRedrawDesktop @ 0x1C023F348 (UserRedrawDesktop.c)
 *     vSpUnTearDownSprites @ 0x1C0286DC0 (vSpUnTearDownSprites.c)
 */

__int64 __fastcall DxLddmSharedPrimaryUnLockNotification(struct _LUID a1, __int64 a2, __int64 a3, __int64 a4)
{
  DWORD LowPart; // ebx
  int v5; // edi
  unsigned int v6; // r14d
  int v7; // r15d
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  __int64 i; // rsi
  int v10; // eax
  __int64 v11; // rdi
  unsigned int CurrentProcessId; // eax
  __int64 ProcessEntry; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  LONG HighPart; // [rsp+64h] [rbp+44h]
  int v19; // [rsp+68h] [rbp+48h]
  __int64 v20; // [rsp+70h] [rbp+50h] BYREF

  v19 = a2;
  HighPart = a1.HighPart;
  LowPart = a1.LowPart;
  v5 = a2;
  v6 = 0;
  v7 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v20, a2, a3, a4);
  for ( i = hdevEnumerate(0LL); i; i = hdevEnumerate(i) )
  {
    v20 = i;
    v10 = *(_DWORD *)(i + 40);
    if ( (v10 & 0x400) == 0
      && (v10 & 0x20000) == 0
      && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v20)
      && LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v20)->LowPart
      && HighPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v20)->HighPart
      && *(_DWORD *)(*(_QWORD *)(v20 + 2576) + 256LL) == v5 )
    {
      GreLockVisRgn(v20);
      GreLockSprite(v20);
      GreLockDisplayDevice(v20);
      v11 = v20;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      ProcessEntry = DxLddmFindProcessEntry(v11 + 2624, CurrentProcessId & 0xFFFFFFFC);
      v14 = ProcessEntry;
      if ( ProcessEntry )
      {
        if ( *(_DWORD *)(ProcessEntry + 20) )
        {
          v15 = v20;
          if ( *(_QWORD *)(v20 + 2648) )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(v20 + 2648))(*(_QWORD *)(v20 + 1800), v14 + 28);
            v15 = v20;
          }
          --*(_DWORD *)(v15 + 2640);
          if ( (*(_DWORD *)(v14 + 20))-- == 1 )
          {
            vSpUnTearDownSprites(v20, v14 + 28, 1LL);
            if ( *(_DWORD *)(v14 + 44) != giVisRgnUniqueness )
              v7 = 1;
          }
        }
      }
      else
      {
        v6 = -1073741811;
      }
      GreUnlockDisplayDevice(v20);
      GreUnlockSprite(v20);
      GreUnlockVisRgn(v20);
      v5 = v19;
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
  if ( v7 )
    UserRedrawDesktop();
  return v6;
}
