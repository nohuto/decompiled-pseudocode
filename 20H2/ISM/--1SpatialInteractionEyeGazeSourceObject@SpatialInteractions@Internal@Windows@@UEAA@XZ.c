/*
 * XREFs of ??1SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800DB3D0
 * Callers:
 *     ??_GSpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800DB4D0 (--_GSpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::~SpatialInteractionEyeGazeSourceObject(
        Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  const struct std::nothrow_t *v8; // rdx
  void *v9; // rcx

  while ( 1 )
  {
    v2 = *((_QWORD *)this + 163);
    if ( !v2 )
      break;
    v3 = v2 - 1;
    *((_QWORD *)this + 163) = v3;
    if ( !v3 )
      *((_QWORD *)this + 162) = 0LL;
  }
  v4 = *((_QWORD *)this + 161);
  while ( v4 )
  {
    --v4;
    v5 = *(void **)(*((_QWORD *)this + 160) + 8 * v4);
    if ( v5 )
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x10);
  }
  v6 = (void *)*((_QWORD *)this + 160);
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(8LL * *((_QWORD *)this + 161)));
  *((_QWORD *)this + 161) = 0LL;
  *((_QWORD *)this + 160) = 0LL;
  v7 = (void *)*((_QWORD *)this + 159);
  *((_QWORD *)this + 159) = 0LL;
  std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x10);
  v9 = (void *)*((_QWORD *)this + 145);
  if ( v9 )
    operator delete(v9, v8);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::~SpatialInteractionSourceObject(this);
}
