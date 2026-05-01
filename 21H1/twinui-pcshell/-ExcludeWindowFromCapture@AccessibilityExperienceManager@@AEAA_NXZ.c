/*
 * XREFs of ?ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ @ 0x18034E8B0
 * Callers:
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x180350544 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall AccessibilityExperienceManager::ExcludeWindowFromCapture(AccessibilityExperienceManager *this)
{
  char v1; // di
  __int64 v2; // rax
  __int64 v3; // rbx
  bool v4; // bl
  bool v5; // al
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-20h]
  __int128 v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+48h] [rbp-8h]
  int v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF

  v1 = 0;
  v12 = 0LL;
  v2 = 0LL;
  v13 = 0LL;
  v3 = *((_QWORD *)this + 48);
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 32LL))(v3, &v12) < 0
      || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v13) < 0 )
    {
      goto LABEL_8;
    }
    v2 = v13;
  }
  v11 = 1;
  LODWORD(v7) = 25;
  *((_QWORD *)&v7 + 1) = &v11;
  LODWORD(v8) = 4;
  v4 = (unsigned int)SetWindowCompositionAttribute(v2, &v7) != 0;
  LODWORD(v9) = 24;
  *((_QWORD *)&v9 + 1) = &v11;
  LODWORD(v10) = 4;
  v7 = v9;
  v8 = v10;
  v5 = (unsigned int)SetWindowCompositionAttribute(v13, &v7) != 0;
  if ( v4 && v5 )
    v1 = 1;
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return v1;
}
