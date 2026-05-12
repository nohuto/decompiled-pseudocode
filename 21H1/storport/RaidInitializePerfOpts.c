/*
 * XREFs of RaidInitializePerfOpts @ 0x1C0030120
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000D810 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqdqqqq_EtwWriteTransfer @ 0x1C0029338 (McTemplateK0qqdqqqq_EtwWriteTransfer.c)
 *     WPP_SF_ @ 0x1C0031E4C (WPP_SF_.c)
 *     RaidInitializeDma @ 0x1C0078B88 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x1C0078D10 (RaidIsDmaInitialized.c)
 */

__int64 __fastcall RaidInitializePerfOpts(__int64 a1, char a2, __int64 i)
{
  __int64 v3; // r11
  char v4; // r12
  char v5; // r13
  char v6; // dl
  __int64 v7; // rdi
  __int64 v8; // rsi
  int v9; // ebp
  char v10; // r10
  char v11; // r9
  unsigned int v12; // ebx
  PDEVICE_OBJECT v13; // rcx
  __int64 v14; // rdx
  __int64 *v15; // rax
  PDEVICE_OBJECT v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // eax
  int v19; // r14d
  __int64 *v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 (__fastcall *v24)(__int64, __int128 *); // rax
  int v25; // eax
  unsigned int v26; // ecx
  __int16 v27; // dx
  unsigned int v28; // r14d
  int v29; // ecx
  unsigned int v30; // r13d
  unsigned int v31; // eax
  USHORT ActiveGroupCount; // ax
  char v33; // r11
  unsigned int v34; // r13d
  __int64 v35; // rcx
  unsigned __int16 epi16; // r10
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r9
  unsigned int v40; // edx
  unsigned int v41; // eax
  __int64 v42; // rcx
  char v44; // [rsp+50h] [rbp-68h]
  __int128 v45; // [rsp+58h] [rbp-60h] BYREF
  __int64 v46; // [rsp+68h] [rbp-50h]
  char v47; // [rsp+C0h] [rbp+8h]
  char v49; // [rsp+D0h] [rbp+18h]
  char v50; // [rsp+D8h] [rbp+20h]

  v3 = 0LL;
  v4 = a2;
  v5 = 0;
  v6 = 0;
  v44 = 0;
  v7 = i;
  v47 = 0;
  v8 = 0LL;
  v50 = 0;
  v49 = 0;
  v9 = 0;
  LOBYTE(i) = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( !a1 )
  {
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_7;
    }
    v14 = 22LL;
LABEL_6:
    WPP_SF_(v13->AttachedDevice, v14, &WPP_f9ccab431b9635edeca76e3554be04bb_Traceguids);
LABEL_7:
    v12 = -1056964602;
    goto LABEL_119;
  }
  if ( !v7 )
  {
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_7;
    }
    v14 = 23LL;
    goto LABEL_6;
  }
  v15 = *(__int64 **)(a1 - 16);
  v8 = *v15;
  if ( (*(_BYTE *)(*v15 + 104) & 0x10) == 0 )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_19;
    }
    v17 = 24LL;
LABEL_18:
    WPP_SF_(v16->AttachedDevice, v17, &WPP_f9ccab431b9635edeca76e3554be04bb_Traceguids);
LABEL_19:
    v12 = -1056964607;
    goto LABEL_119;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
  {
    McTemplateK0qqdqqqq_EtwWriteTransfer(
      a1,
      &EventAdapterInitPerfConfigData,
      i,
      *(_DWORD *)v7,
      *(_DWORD *)(v7 + 4),
      *(_DWORD *)(v7 + 8),
      *(_DWORD *)(v7 + 12),
      *(_DWORD *)(v7 + 16),
      *(_DWORD *)(v7 + 20),
      *(_DWORD *)(v7 + 24));
    LOBYTE(i) = 0;
    v6 = 0;
    v11 = 0;
    v10 = 0;
    v3 = 0LL;
  }
  v18 = *(_DWORD *)v7;
  v19 = 3;
  if ( *(_DWORD *)v7 && *(_DWORD *)(v7 + 4) >= 0xCu )
    v5 = 1;
  if ( v18 >= 2 && *(_DWORD *)(v7 + 4) >= 0x18u )
  {
    LOBYTE(i) = 1;
    v44 = 1;
    v19 = 7;
  }
  if ( v18 >= 3 && *(_DWORD *)(v7 + 4) >= 0x28u )
  {
    v6 = 1;
    v47 = 1;
    v19 |= 0x18u;
  }
  if ( v18 >= 4 && *(_DWORD *)(v7 + 4) >= 0x28u )
  {
    v10 = 1;
    v50 = 1;
    v19 |= 0x20u;
  }
  if ( v18 >= 5 && *(_DWORD *)(v7 + 4) >= 0x28u )
  {
    if ( KeGetCurrentIrql() )
      goto LABEL_51;
    v45 = 0LL;
    LODWORD(v45) = 1;
    v46 = 0LL;
    if ( !*(_BYTE *)(v8 + 4514) )
      goto LABEL_51;
    v20 = (__int64 *)(v8 + 712);
    if ( !(unsigned __int8)RaidIsDmaInitialized(v8 + 712) )
    {
      RaidInitializeDma(v21, *(_QWORD *)(v8 + 32), v8 + 312);
      v3 = 0LL;
    }
    if ( v8 != -712 && (v22 = *v20) != 0 && (v23 = *(_QWORD *)(v22 + 8)) != 0 )
    {
      if ( *(int *)(v8 + 740) < 3 || (v24 = *(__int64 (__fastcall **)(__int64, __int128 *))(v23 + 128)) == 0LL )
      {
LABEL_50:
        v4 = a2;
LABEL_51:
        LOBYTE(i) = v44;
        v11 = 1;
        v6 = v47;
        v10 = v50;
        v49 = 1;
        goto LABEL_52;
      }
      v25 = v24(v22, &v45);
      v3 = 0LL;
    }
    else
    {
      v25 = -1073741811;
    }
    if ( v25 >= 0 )
    {
      v4 = a2;
      if ( (v46 & 2) != 0 )
        v19 |= 0x40u;
      goto LABEL_51;
    }
    goto LABEL_50;
  }
LABEL_52:
  if ( !v5 && !(_BYTE)i && !v6 && !v10 && !v11 )
  {
    if ( !v4 )
    {
      v12 = -1056964602;
      goto LABEL_119;
    }
    *(_DWORD *)(v7 + 4) = 12;
    *(_DWORD *)v7 = 1;
  }
  if ( v4 )
  {
    *(_DWORD *)(v7 + 8) = v19;
    v9 = v19;
    v12 = v3;
    goto LABEL_119;
  }
  v26 = *(_DWORD *)(v7 + 8);
  if ( (~v19 & v26) != 0 )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_19;
    }
    v17 = 25LL;
    goto LABEL_18;
  }
  if ( (v26 & 2) != 0 )
  {
    v9 = 2;
    *(_DWORD *)(v8 + 4808) = -*(_DWORD *)(v7 + 12);
    v26 = *(_DWORD *)(v7 + 8);
  }
  if ( (v26 & 1) != 0 )
  {
    v9 |= 1u;
    v27 = *(_WORD *)(v8 + 4804) | 1;
    *(_WORD *)(v8 + 4804) = v27;
    if ( *(_BYTE *)(v8 + 4513) != 1 || *(_QWORD *)(v8 + 4824) == v3 || *(_QWORD *)(v8 + 4504) == v3 )
    {
      v33 = v47;
    }
    else
    {
      v28 = v3;
      v29 = *(unsigned __int16 *)(*(_QWORD *)(v8 + 4496) + 4LL);
      v30 = v29 - 1;
      if ( (_BYTE)i && (*(_DWORD *)(v7 + 8) & 4) != 0 )
      {
        v28 = *(_DWORD *)(v7 + 16);
        v31 = *(_DWORD *)(v7 + 20);
        if ( v28 > v31 || v31 > v30 )
        {
          v16 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            goto LABEL_19;
          }
          v17 = 26LL;
          goto LABEL_18;
        }
        v30 = *(_DWORD *)(v7 + 20);
        LOWORD(v29) = v31 - v28 + 1;
        v9 |= 4u;
      }
      *(_WORD *)(v8 + 4804) = v27 ^ (v27 ^ (4 * v29)) & 0x3FC | 2;
      ActiveGroupCount = KeQueryActiveGroupCount();
      v33 = v47;
      v34 = v30 + 1;
      *(_WORD *)(v8 + 4806) = ActiveGroupCount;
      if ( v28 < v34 )
      {
        v35 = 16LL * v28;
        do
        {
          epi16 = _mm_extract_epi16(*(__m128i *)(*(_QWORD *)(v8 + 4504) + v35), 4);
          v37 = *(_QWORD *)(*(_QWORD *)(v8 + 4504) + v35);
          if ( epi16 != 0xFFFF )
          {
            if ( v47 && (*(_BYTE *)(v7 + 8) & 0xC) == 0xC )
            {
              v9 |= 8u;
              *(_WORD *)(*(_QWORD *)(v7 + 32) + v35 + 8) = epi16;
              *(_QWORD *)(v35 + *(_QWORD *)(v7 + 32)) = v37;
            }
            if ( v28 < 0xFF )
            {
              for ( i = 0LL; v37; v37 >>= 1 )
              {
                if ( (v37 & 1) != 0 )
                {
                  v38 = *(_QWORD *)(v8 + 4824);
                  v39 = (unsigned int)i + (epi16 << 6);
                  if ( *(_BYTE *)(v39 + v38) == 0xFF )
                    *(_BYTE *)(v39 + v38) = v28;
                }
                i = (unsigned int)(i + 1);
              }
            }
          }
          ++v28;
          v35 += 16LL;
        }
        while ( v28 < v34 );
      }
      v11 = v49;
    }
    v26 = *(_DWORD *)(v7 + 8);
  }
  else
  {
    if ( (_BYTE)i && (v26 & 4) != 0 )
      goto LABEL_19;
    if ( (v26 & 0x20) != 0 )
      goto LABEL_102;
    v33 = v47;
  }
  if ( v33 && (v26 & 8) != 0 )
  {
    v9 |= 8u;
    *(_DWORD *)(v7 + 24) = *(_DWORD *)(v8 + 4800);
  }
  v40 = v26;
  if ( !v33 || (v26 & 0x10) == 0 )
    goto LABEL_111;
  if ( (v9 & 1) == 0 )
  {
LABEL_102:
    v12 = -1056964607;
    goto LABEL_119;
  }
  v9 |= 0x10u;
  *(_BYTE *)(v8 + 4515) |= 1u;
  v40 = *(_DWORD *)(v7 + 8);
LABEL_111:
  v41 = v40;
  if ( v50 && (v40 & 0x20) != 0 )
  {
    v9 |= 0x20u;
    *(_BYTE *)(v8 + 4515) |= 2u;
    v41 = *(_DWORD *)(v7 + 8);
  }
  v42 = v41;
  if ( v11 && (v41 & 0x40) != 0 )
  {
    v9 |= 0x40u;
    *(_BYTE *)(v8 + 4515) |= 4u;
    v42 = *(unsigned int *)(v7 + 8);
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0qqdqqqq_EtwWriteTransfer(
      v42,
      &EventAdapterFinalPerfConfigData,
      i,
      *(_DWORD *)v7,
      *(_DWORD *)(v7 + 4),
      v42,
      *(_DWORD *)(v7 + 12),
      *(_DWORD *)(v7 + 16),
      *(_DWORD *)(v7 + 20),
      *(_DWORD *)(v7 + 24));
LABEL_119:
  if ( v9 != *(_DWORD *)(v7 + 8) )
  {
    if ( (v9 & 2) != 0 )
      *(_DWORD *)(v8 + 4808) = 0;
    if ( (v9 & 1) != 0 )
    {
      *(_BYTE *)(v8 + 4515) &= ~1u;
      *(_WORD *)(v8 + 4804) = 0;
    }
    if ( (v9 & 0x20) != 0 )
      *(_BYTE *)(v8 + 4515) &= ~2u;
  }
  return v12;
}
