/*
 * XREFs of ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0276BBC
 * Callers:
 *     NtGdiDdDDISharedPrimaryLockNotification @ 0x1C0278C40 (NtGdiDdDDISharedPrimaryLockNotification.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0050C74 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C027764C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C0281C3C (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 */

__int64 __fastcall DxLddmSharedPrimaryLockNotification(
        struct _LUID a1,
        __int64 a2,
        const struct _RECTL *a3,
        __int64 a4)
{
  DWORD LowPart; // ebx
  unsigned int v5; // edi
  int v6; // r12d
  const struct _RECTL *v7; // r14
  int v8; // esi
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  HDEV i; // rcx
  int v11; // eax
  struct _LUID *v12; // rax
  HDEV v13; // r15
  unsigned int CurrentProcessId; // eax
  LONG top; // ecx
  unsigned int v16; // r9d
  int right; // r9d
  struct tagSIZE v18; // rax
  int v19; // r9d
  struct tagSIZE v20; // rax
  int v21; // r10d
  _DWORD *ProcessEntry; // rsi
  _DWORD *v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  struct _RECTL *v26; // rdx
  LONG v27; // eax
  LONG v28; // eax
  LONG bottom; // eax
  HDEV v30; // rax
  HDEV v31; // r13
  HDEV v33; // [rsp+20h] [rbp-60h] BYREF
  char v34[4]; // [rsp+28h] [rbp-58h] BYREF
  int v35; // [rsp+2Ch] [rbp-54h]
  __int64 v36; // [rsp+30h] [rbp-50h]
  struct _LUID v37; // [rsp+38h] [rbp-48h]
  __int128 v38; // [rsp+60h] [rbp-20h] BYREF

  LowPart = a1.LowPart;
  v37 = a1;
  v5 = 0;
  v35 = a2;
  v6 = 0;
  v7 = a3;
  v8 = a2;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v34, a2, (__int64)a3, a4);
  if ( !g_pDwmState )
  {
    for ( i = 0LL; ; i = v31 )
    {
      v30 = (HDEV)hdevEnumerate(i);
      v31 = v30;
      if ( !v30 )
        break;
      v33 = v30;
      v11 = *((_DWORD *)v30 + 10);
      if ( (v11 & 0x400) == 0 && (v11 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v33) )
        {
          if ( LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v33)->LowPart )
          {
            v12 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v33);
            if ( v37.HighPart == v12->HighPart && *(_DWORD *)(*((_QWORD *)v33 + 322) + 256LL) == v8 )
            {
              GreLockVisRgn(v33);
              GreLockSprite(v33);
              GreLockDisplayDevice(v33);
              v13 = v33 + 656;
              CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
              v38 = 0LL;
              top = v7->top;
              v36 = CurrentProcessId & 0xFFFFFFFC;
              if ( top || v7->left || v7->right || v7->bottom )
              {
                right = v7->right;
                if ( right <= v7->left
                  || v7->bottom <= top
                  || v7->left < 0
                  || right < 0
                  || (v18 = PDEVOBJ::sizl((PDEVOBJ *)&v33), v19 > *(_DWORD *)v18.cx)
                  || (v20 = PDEVOBJ::sizl((PDEVOBJ *)&v33), v21 > *(_DWORD *)(*(_QWORD *)&v20 + 4LL)) )
                {
                  v6 = -1073741811;
                }
                v16 = v36;
              }
              else
              {
                DWORD2(v38) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v33).cx;
                v7 = (const struct _RECTL *)&v38;
                HIDWORD(v38) = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v33) + 4LL);
              }
              if ( v6 >= 0 )
              {
                ProcessEntry = (_DWORD *)DxLddmFindProcessEntry(v13, v16);
                if ( !ProcessEntry )
                {
                  v23 = PALLOCMEM2(0x30uLL, 1684305988LL, 1);
                  if ( v23 )
                  {
                    v23[4] = v36;
                    v24 = *(_QWORD *)v13;
                    if ( *(HDEV *)(*(_QWORD *)v13 + 8LL) != v13 )
                      __fastfail(3u);
                    *(_QWORD *)v23 = v24;
                    ProcessEntry = v23;
                    *((_QWORD *)v23 + 1) = v13;
                    *(_QWORD *)(v24 + 8) = v23;
                    *(_QWORD *)v13 = v23;
                  }
                  else
                  {
                    v6 = -1073741801;
                  }
                }
                if ( v6 >= 0 )
                {
                  ++ProcessEntry[5];
                  ++*((_DWORD *)v33 + 660);
                  v25 = ProcessEntry[6];
                  if ( v25 != -1 )
                    ProcessEntry[6] = v25 + 1;
                  v26 = (struct _RECTL *)(ProcessEntry + 7);
                  if ( ProcessEntry[5] == 1 )
                  {
                    *v26 = *v7;
                    ProcessEntry[11] = giVisRgnUniqueness;
                  }
                  else
                  {
                    if ( v7->left < v26->left )
                      v26->left = v7->left;
                    v27 = v7->top;
                    if ( v27 < ProcessEntry[8] )
                      ProcessEntry[8] = v27;
                    v28 = v7->right;
                    if ( v28 > ProcessEntry[9] )
                      ProcessEntry[9] = v28;
                    bottom = v7->bottom;
                    if ( bottom > ProcessEntry[10] )
                      ProcessEntry[10] = bottom;
                  }
                  bSpTearDownSprites(v33, v26, 1);
                  PDEVOBJ::vSync(
                    (PDEVOBJ *)&v33,
                    (struct _SURFOBJ *)((*((_QWORD *)v33 + 319) + 24LL) & -(__int64)(*((_QWORD *)v33 + 319) != 0LL)),
                    0LL,
                    6u);
                }
                v8 = v35;
              }
              GreUnlockDisplayDevice(v33);
              GreUnlockSprite(v33);
              GreUnlockVisRgn(v33);
            }
          }
        }
      }
    }
    v5 = v6;
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
  return v5;
}
