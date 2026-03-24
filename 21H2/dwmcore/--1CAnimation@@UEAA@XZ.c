/*
 * XREFs of ??1CAnimation@@UEAA@XZ @ 0x1800BBBB4
 * Callers:
 *     ??_GCAnimation@@UEAAPEAXI@Z @ 0x1800BBB70 (--_GCAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800656F0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x1800BB5D0 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x1800BBDFC (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800C0048 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimation::~CAnimation(CAnimation *this)
{
  CAnimation *v2; // rcx
  bool v3; // zf
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  void *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 i; // r9
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rcx

  *(_QWORD *)this = &CAnimation::`vftable'{for `CResource'};
  v2 = (CAnimation *)((char *)this + 56);
  v3 = (*((_BYTE *)this + 112) & 2) == 0;
  *(_QWORD *)v2 = &CAnimation::`vftable'{for `IAnimationResource'};
  *((_QWORD *)this + 13) = &CAnimation::`vftable';
  if ( v3 && *((_QWORD *)this + 15) && *((_DWORD *)this + 22) )
    CAnimation::UpdateAnimateValues(v2);
  v4 = *((_QWORD *)this + 15);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 29);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CAnimation::EndAnimation(this);
  if ( (*((_BYTE *)this + 112) & 2) != 0 && *((_DWORD *)this + 22) )
  {
    v12 = 0;
    do
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 8) + 16LL * v12);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      ++v12;
    }
    while ( v12 < *((_DWORD *)this + 22) );
    *((_DWORD *)this + 22) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 64, 16LL);
  }
  v6 = *((_QWORD *)this + 18);
  if ( v6 )
  {
    v8 = *(unsigned int *)(v6 + 80);
    v9 = 0LL;
    for ( i = *(_QWORD *)(v6 + 56); (unsigned int)v9 < (unsigned int)v8; v9 = (unsigned int)(v9 + 1) )
    {
      if ( this == *(CAnimation **)(i + 8 * v9) )
        break;
    }
    if ( (unsigned int)v9 < (unsigned int)v8 )
    {
      while ( (unsigned int)v9 < (int)v8 - 1 )
      {
        *(_QWORD *)(i + 8 * v9) = *(_QWORD *)(i + 8LL * (unsigned int)(v9 + 1));
        v9 = (unsigned int)(v9 + 1);
        v8 = *(unsigned int *)(v6 + 80);
      }
      *(_DWORD *)(v6 + 80) = v8 - 1;
    }
    v11 = *((_QWORD *)this + 18);
    if ( v11 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v11 + 16LL))(v11, v8, v6, i);
  }
  v7 = (void *)*((_QWORD *)this + 16);
  if ( v7 )
    operator delete(v7);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 152);
  CBaseAnimation::~CBaseAnimation(this);
}
