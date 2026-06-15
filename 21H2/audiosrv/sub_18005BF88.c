/*
 * XREFs of sub_18005BF88 @ 0x18005BF88
 * Callers:
 *     sub_18005BDFC @ 0x18005BDFC (sub_18005BDFC.c)
 * Callees:
 *     sub_180055424 @ 0x180055424 (sub_180055424.c)
 *     sub_18005C014 @ 0x18005C014 (sub_18005C014.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_18005BF88(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  v3 = (_QWORD *)(a1 + 88);
  v5 = *(_QWORD *)(a1 + 88);
  if ( v5 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v8 = sub_18005C014(a2, a3, v3);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v14) = 96;
LABEL_12:
      LODWORD(v13) = v8;
      v12 = (__int64)"SpatialAudioConfigureDevice::RuntimeClassInitialize";
      sub_180109778((int)&dword_18019C480, (__int64)&v12, (__int64)&v14, (__int64)&v13);
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 96);
    if ( v10 )
    {
      *(_QWORD *)(a1 + 96) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v8 = sub_180055424(a2, a3, (_QWORD *)(a1 + 96));
    v9 = v8;
    if ( v8 < 0 && (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v14) = 99;
      goto LABEL_12;
    }
  }
  return v9;
}
