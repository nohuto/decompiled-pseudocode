/*
 * XREFs of ??1CAnimation@@UEAA@XZ @ 0x1800CDB54
 * Callers:
 *     ??_GCAnimation@@UEAAPEAXI@Z @ 0x1800CDB10 (--_GCAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x1800CD510 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x1800CDD50 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAnimation::~CAnimation(CAnimation *this)
{
  CAnimation *v2; // rcx
  bool v3; // zf
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  void *v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 i; // r9
  __int64 v13; // rcx

  *(_QWORD *)this = &CAnimation::`vftable'{for `CResource'};
  v2 = (CAnimation *)((char *)this + 64);
  v3 = (*((_BYTE *)this + 120) & 2) == 0;
  *(_QWORD *)v2 = &CAnimation::`vftable'{for `IAnimationResource'};
  *((_QWORD *)this + 14) = &CAnimation::`vftable';
  if ( v3 && *((_QWORD *)this + 16) && *((_DWORD *)this + 24) )
    CAnimation::UpdateAnimateValues(v2);
  v4 = *((_QWORD *)this + 16);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 30);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CAnimation::EndAnimation(this);
  if ( (*((_BYTE *)this + 120) & 2) != 0 && *((_DWORD *)this + 24) )
  {
    v8 = 0;
    do
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 9) + 16LL * v8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      ++v8;
    }
    while ( v8 < *((_DWORD *)this + 24) );
    *((_DWORD *)this + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 72, 16LL);
  }
  v6 = *((_QWORD *)this + 19);
  if ( v6 )
  {
    v10 = *(unsigned int *)(v6 + 88);
    v11 = 0LL;
    for ( i = *(_QWORD *)(v6 + 64); (unsigned int)v11 < (unsigned int)v10; v11 = (unsigned int)(v11 + 1) )
    {
      if ( this == *(CAnimation **)(i + 8 * v11) )
        break;
    }
    if ( (unsigned int)v11 < (unsigned int)v10 )
    {
      while ( (unsigned int)v11 < (int)v10 - 1 )
      {
        *(_QWORD *)(i + 8 * v11) = *(_QWORD *)(i + 8LL * (unsigned int)(v11 + 1));
        v11 = (unsigned int)(v11 + 1);
        v10 = *(unsigned int *)(v6 + 88);
      }
      *(_DWORD *)(v6 + 88) = v10 - 1;
    }
    v13 = *((_QWORD *)this + 19);
    if ( v13 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v13 + 16LL))(v13, v10, v6, i);
  }
  v7 = (void *)*((_QWORD *)this + 17);
  if ( v7 )
    operator delete(v7, 0x10uLL);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 20);
  CBaseAnimation::~CBaseAnimation(this);
}
