/*
 * XREFs of ?GetLinkedFontUFIs@RFONTOBJ@@QAEHAAVXDCOBJ@@PAU_UNIVERSAL_FONT_ID@@H@Z @ 0x207544
 * Callers:
 *     _NtGdiGetLinkedUFIs@12 @ 0x1D9578 (_NtGdiGetLinkedUFIs@12.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?AddUFIToBuffer@RFONTOBJ@@AAEXPAVPFE@@AAPAU_UNIVERSAL_FONT_ID@@AAHH@Z @ 0x206D67 (-AddUFIToBuffer@RFONTOBJ@@AAEXPAVPFE@@AAPAU_UNIVERSAL_FONT_ID@@AAHH@Z.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AAEPAVPFE@@I@Z @ 0x2074B9 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AAEPAVPFE@@I@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QAEHAAVXDCOBJ@@@Z @ 0x2078D5 (-bInitSystemTT@RFONTOBJ@@QAEHAAVXDCOBJ@@@Z.c)
 */

int __thiscall RFONTOBJ::GetLinkedFontUFIs(RFONTOBJ *this, BOOL a2, struct _UNIVERSAL_FONT_ID *a3, int a4)
{
  int v4; // ebx
  struct _UNIVERSAL_FONT_ID *v5; // esi
  int v7; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // esi
  struct _LIST_ENTRY *v12; // eax
  struct _LIST_ENTRY *v13; // eax
  int v14; // ecx
  struct _LIST_ENTRY *Flink; // eax
  struct _LIST_ENTRY *v16; // ecx
  struct PFE *v17; // ecx
  int v18; // ecx
  int v19; // esi
  bool v20; // cc
  struct _UNIVERSAL_FONT_ID *v21; // ebx
  int v22; // ecx
  struct PFE *EUDCDefaultFontPFE; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // esi
  int v27; // ecx
  struct _LIST_ENTRY *v28; // [esp+Ch] [ebp-8h] BYREF
  int v29; // [esp+10h] [ebp-4h] BYREF

  v29 = 0;
  v4 = a4;
  v5 = a3;
  if ( a4 && !a3 )
    return 0;
  v7 = *(_DWORD *)this;
  if ( *(_DWORD *)(*(_DWORD *)this + 704) )
  {
    if ( !*(_DWORD *)(v7 + 716) && !RFONTOBJ::bInitSystemTT(this, (struct XDCOBJ *)a2) )
      return 0;
    *(_DWORD *)(*(_DWORD *)this + 708) |= 0x100u;
    v7 = *(_DWORD *)this;
  }
  v9 = *(_DWORD *)(v7 + 716);
  if ( v9 )
  {
    v29 = 1;
    if ( v4 > 0 )
    {
      v10 = *(_DWORD *)(v9 + 80);
      a2 = 0;
      *(_DWORD *)v5 = *(_DWORD *)(v10 + 52);
      *((_DWORD *)v5 + 1) = *(_DWORD *)(v10 + 56);
      a3 = (struct _UNIVERSAL_FONT_ID *)((char *)v5 + 8);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a2);
      v7 = *(_DWORD *)this;
    }
  }
  a2 = *(_DWORD *)(v7 + 784) != 0;
  GreAcquireSemaphore(ghsemEUDC1);
  ++gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  v11 = *(_DWORD *)(*(_DWORD *)this + 80);
  v12 = *(struct _LIST_ENTRY **)(v11 + 76);
  if ( v12 )
    v13 = v12 + 1;
  else
    v13 = &NullListHead;
  while ( 1 )
  {
    v14 = *(_DWORD *)(v11 + 76);
    Flink = v13->Flink;
    v28 = Flink;
    v16 = v14 ? (struct _LIST_ENTRY *)(v14 + 8) : &NullListHead;
    if ( Flink == v16 )
      break;
    v17 = (struct PFE *)*((_DWORD *)&Flink[3].Flink + a2);
    if ( !v17 )
      v17 = (struct PFE *)Flink[3].Flink;
    RFONTOBJ::AddUFIToBuffer(this, v17, &a3, &v29, v4);
    v13 = v28;
  }
  GreAcquireSemaphore(ghsemEUDC1);
  --gcEUDCCount;
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  v18 = *(_DWORD *)(*(_DWORD *)this + 724);
  if ( v18 )
  {
    v19 = v29 + 1;
    v20 = v29 < v4;
    v21 = a3;
    ++v29;
    if ( v20 )
    {
      v22 = *(_DWORD *)(v18 + 80);
      v28 = 0;
      *(_DWORD *)a3 = *(_DWORD *)(v22 + 52);
      *((_DWORD *)v21 + 1) = *(_DWORD *)(v22 + 56);
      v21 = (struct _UNIVERSAL_FONT_ID *)((char *)v21 + 8);
      a3 = v21;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
    }
  }
  else
  {
    EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, a2);
    RFONTOBJ::AddUFIToBuffer(this, EUDCDefaultFontPFE, &a3, &v29, v4);
    v21 = a3;
    v19 = v29;
  }
  v24 = *(_DWORD *)(*(_DWORD *)this + 720);
  if ( v24 )
  {
    v25 = v19;
    v26 = v19 + 1;
    if ( v25 < a4 )
    {
      v27 = *(_DWORD *)(v24 + 80);
      a3 = 0;
      *(_DWORD *)v21 = *(_DWORD *)(v27 + 52);
      *((_DWORD *)v21 + 1) = *(_DWORD *)(v27 + 56);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a3);
    }
  }
  else
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    RFONTOBJ::AddUFIToBuffer(this, *(&gappfeSysEUDC + a2), &a3, &v29, a4);
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    return v29;
  }
  return v26;
}
