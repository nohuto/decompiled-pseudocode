/*
 * XREFs of MiDbgWriteCheck @ 0x1403AD16C
 * Callers:
 *     MiDbgCopyMemory @ 0x14028FA14 (MiDbgCopyMemory.c)
 * Callees:
 *     MiRealVaToFlushType @ 0x140227300 (MiRealVaToFlushType.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MmIsAddressValidEx @ 0x14028FBF0 (MmIsAddressValidEx.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPagePrivilege @ 0x140313B20 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KeSetPagePrivilege @ 0x14039FDB0 (KeSetPagePrivilege.c)
 *     KeFlushSingleCurrentTb @ 0x1403AD304 (KeFlushSingleCurrentTb.c)
 *     MiDbgMarkPfnModified @ 0x1405A4940 (MiDbgMarkPfnModified.c)
 */

unsigned __int64 __fastcall MiDbgWriteCheck(unsigned __int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  int v4; // eax
  int v5; // r13d
  unsigned __int64 *v6; // r14
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 LeafVa; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // eax
  __int64 v15; // rbx
  int v16; // r15d
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r12
  __int64 v19; // rdi
  int v20; // eax
  bool v21; // zf
  __int128 v22; // [rsp+20h] [rbp-10h] BYREF
  __int64 v24; // [rsp+88h] [rbp+58h] BYREF

  *a2 = 0LL;
  v2 = a2;
  if ( !MmIsAddressValidEx(a1) )
    return 0LL;
  v4 = MI_IS_PHYSICAL_ADDRESS(a1);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 != 1
      || PsNtosImageBase
      && PsHalImageBase
      && (a1 < PsNtosImageBase || a1 >= PsNtosImageEnd)
      && (a1 < PsHalImageBase || a1 >= PsHalImageEnd) )
    {
      return a1;
    }
    v6 = (unsigned __int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v24 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
    v7 = v24;
    v8 = ((a1 >> 12) & 0x1FF)
       + (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v24) >> 12) & 0xFFFFFFFFFFLL);
  }
  else
  {
    v6 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v24 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
    v7 = v24;
    v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v24) >> 12) & 0xFFFFFFFFFFLL;
  }
  if ( (MiFlags & 0x4000) == 0 && (MiFlags & 0x8000) == 0 )
    goto LABEL_11;
  v18 = 0LL;
  v19 = 0LL;
  v22 = 0LL;
  if ( (MiFlags & 0x800) == 0 )
    goto LABEL_36;
  if ( v8 > qword_140C50840 || ((*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
  {
LABEL_44:
    v20 = 0;
    goto LABEL_38;
  }
  v19 = 48 * v8 - 0x220000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    return 0LL;
  v18 = 0x8000000000000000uLL;
  if ( !(unsigned int)MiGetPagePrivilege(48 * v8 - 0x220000000000LL, 1, (unsigned __int64 *)&v22) )
  {
    v7 = v24;
    goto LABEL_44;
  }
  if ( (MiFlags & 0x4000) == 0
    || *(__int64 *)(v19 + 40) >= 0
    || (*(_DWORD *)(v19 + 16) & 0x400LL) != 0
    || a1 < 0xFFFF800000000000uLL )
  {
    v7 = v24;
    goto LABEL_37;
  }
  v7 = v24;
LABEL_36:
  *(_QWORD *)&v22 = a1;
LABEL_37:
  v20 = KeSetPagePrivilege(v8, &v22, 12);
LABEL_38:
  if ( v18 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), ~v18);
    v7 = v24;
  }
  if ( v20 < 0 )
    return 0LL;
  v2 = a2;
LABEL_11:
  if ( (v7 & 0x800) != 0 && (v7 & 0x42) != 0 )
  {
LABEL_13:
    if ( (MiFlags & 0x100) == 0 )
    {
      LeafVa = MiGetLeafVa(a1);
      v13 = MiRealVaToFlushType(LeafVa, v10, v11, v12);
      KeFlushSingleCurrentTb(a1, v13);
    }
    return a1;
  }
  if ( v5 || (unsigned int)MiDbgMarkPfnModified(a1, v7) )
  {
    *v2 = v7;
    v15 = v7 | 0x862;
    v24 = v15;
    _InterlockedIncrement(&dword_140C52BD4);
    v16 = 0;
    v17 = v15;
    if ( !MiPteInShadowRange((unsigned __int64)v6) )
    {
LABEL_18:
      *v6 = v17;
      if ( v16 )
        MiWritePteShadow((__int64)v6, v17);
      _InterlockedDecrement(&dword_140C52BD4);
      goto LABEL_13;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_18;
      v21 = (v15 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_18;
      v21 = (v15 & 1) == 0;
    }
    if ( !v21 )
      v17 = v15 | 0x8000000000000000uLL;
    goto LABEL_18;
  }
  return 0LL;
}
