/*
 * XREFs of ?RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z @ 0x180121208
 * Callers:
 *     ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Z @ 0x180120AB4 (--$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBU_tagpropertykey@@@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@QEAAPEAU_tagpropertykey@@QEAU2@AEBU2@@Z @ 0x180120B88 (--$_Emplace_reallocate@AEBU_tagpropertykey@@@-$vector@U_tagpropertykey@@V-$allocator@U_tagproper.c)
 */

__int64 __fastcall CHybridPropertyStore::RuntimeClassInitialize(
        CHybridPropertyStore *this,
        struct IMMDevice *a2,
        unsigned int a3,
        const struct _tagpropertykey *a4)
{
  HRESULT v8; // edi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // rcx
  const struct _tagpropertykey *v13; // r8
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = PSCreateMemoryPropertyStore(&GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, (void **)this + 3);
  v9 = 0;
  if ( v8 < 0 )
  {
    v10 = 63LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v12 = *((_QWORD *)this + 2);
  if ( v12 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, char *))a2->lpVtbl->OpenPropertyStore)(
         a2,
         0LL,
         (char *)this + 16);
  if ( v8 < 0 )
  {
    v10 = 66LL;
    goto LABEL_3;
  }
  try
  {
    while ( v9 < a3 )
    {
      v13 = &a4[v9];
      v14 = *((_QWORD *)this + 5);
      if ( *((_QWORD *)this + 6) == v14 )
      {
        std::vector<_tagpropertykey>::_Emplace_reallocate<_tagpropertykey const &>(
          (const void **)this + 4,
          (_BYTE *)v14,
          (__int64)v13);
      }
      else
      {
        *(GUID *)v14 = v13->fmtid;
        *(_DWORD *)(v14 + 16) = v13->pid;
        *((_QWORD *)this + 5) += 20LL;
      }
      ++v9;
    }
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return 0LL;
}
