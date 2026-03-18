/*
 * XREFs of ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0014CE8
 * Callers:
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x1C0014CD0 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 * Callees:
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C0014FA0 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00809E0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0080B34 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0081350 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C00814D0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0084160 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegion::InternalCombine(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v4; // rdi
  int v5; // ecx
  unsigned int v6; // ebx
  int v7; // esi
  __int64 v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+28h] [rbp-8h]
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+48h] BYREF

  v4 = (_DWORD *)(a2 + 12);
  v5 = *(_DWORD *)(a1 + 12);
  v6 = 0;
  v7 = a3;
  if ( v5 == 2 && *v4 == 2 )
    goto LABEL_7;
  if ( *v4 )
  {
    if ( *v4 != 1 )
    {
      if ( !v5 )
      {
        v6 = CRegion::InitializeFromRect((CRegion *)a1, &CRegion::sc_rcEmpty);
        goto LABEL_6;
      }
      if ( v5 != 1 )
        return (unsigned int)-1073741595;
      if ( a3 == 1 )
        goto LABEL_36;
      if ( a3 == 2 )
        goto LABEL_7;
      if ( a3 <= 2 )
        return (unsigned int)-1073741811;
      if ( a3 > 4 )
      {
        if ( a3 != 5 )
          return (unsigned int)-1073741811;
LABEL_36:
        v6 = CRegion::InitializeFromRect((CRegion *)a1, &CRegion::sc_rcEmpty);
        v7 = 5;
        goto LABEL_6;
      }
      return (unsigned int)-2147020579;
    }
    if ( a3 == 1 )
      goto LABEL_7;
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
        return (unsigned int)-2147020579;
      if ( a3 == 4 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        goto LABEL_7;
      }
      if ( a3 != 5 )
        return (unsigned int)-1073741811;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    goto LABEL_7;
  }
  if ( a3 == 5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
LABEL_6:
  if ( (v6 & 0x80000000) != 0 )
    return v6;
LABEL_7:
  if ( *(_DWORD *)(a1 + 12) != 2 || *v4 != 2 )
    return v6;
  v14 = *(_QWORD *)(a2 + 16);
  if ( !v14 || (unsigned int)(v7 - 1) > 4 )
    return (unsigned int)-1073741811;
  v9 = *(_QWORD *)(a1 + 16);
  v12 = 0;
  v13 = v9;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v11, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v11);
  if ( v9 && v11 )
  {
    if ( (unsigned int)RGNOBJ::bMerge((RGNOBJ *)&v11, (struct RGNOBJ *)&v13, (struct RGNOBJ *)&v14, byte_1C020D248[v7]) )
    {
      RGNOBJ::vSwap((RGNOBJ *)&v11, (struct RGNOBJ *)&v13);
      v6 = 0;
      *(_QWORD *)(a1 + 16) = v13;
    }
    else
    {
      v6 = -1073741823;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
  return v6;
}
