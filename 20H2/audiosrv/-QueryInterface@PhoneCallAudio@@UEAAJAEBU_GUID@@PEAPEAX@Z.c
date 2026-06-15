/*
 * XREFs of ?QueryInterface@PhoneCallAudio@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010FA90
 * Callers:
 *     ?QueryInterface@PhoneCallAudio@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074970 (-QueryInterface@PhoneCallAudio@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@PhoneCallAudio@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074980 (-QueryInterface@PhoneCallAudio@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@PhoneCallAudio@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074990 (-QueryInterface@PhoneCallAudio@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhoneCallAudio::QueryInterface(PhoneCallAudio *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  void **v4; // r10
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rdx
  void (__fastcall *v8)(PhoneCallAudio *, char *, void **, PhoneCallAudio *); // rax
  __int64 v9; // rax

  v3 = 0;
  v4 = a3;
  if ( !a3 )
    return (unsigned int)-2147467261;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_140c61e5_b527_421d_9d43_79a9ffd701d7.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_140c61e5_b527_421d_9d43_79a9ffd701d7.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_140c61e5_b527_421d_9d43_79a9ffd701d7.Data4;
  if ( !v5 )
  {
    *a3 = this;
    (*(void (__fastcall **)(PhoneCallAudio *, const struct _GUID *, void **, PhoneCallAudio *))(*(_QWORD *)this + 8LL))(
      this,
      a2,
      a3,
      this);
    return v3;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e1fd1a76_d0e5_4694_a4a8_c63178a6c080.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e1fd1a76_d0e5_4694_a4a8_c63178a6c080.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e1fd1a76_d0e5_4694_a4a8_c63178a6c080.Data4;
  if ( !v6 )
  {
    v7 = (char *)this + 8;
    *a3 = (void *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    v8 = *(void (__fastcall **)(PhoneCallAudio *, char *, void **, PhoneCallAudio *))(*(_QWORD *)this + 8LL);
LABEL_15:
    v8(this, v7, a3, this);
    return v3;
  }
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_12f0ac85_d91a_4950_96a5_e7385ed7b7f4.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_12f0ac85_d91a_4950_96a5_e7385ed7b7f4.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_12f0ac85_d91a_4950_96a5_e7385ed7b7f4.Data4;
  if ( !v9 )
  {
    a3 = (void **)((char *)this + 16);
    v7 = (char *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
    *v4 = v7;
    v8 = *(void (__fastcall **)(PhoneCallAudio *, char *, void **, PhoneCallAudio *))(*(_QWORD *)this + 8LL);
    goto LABEL_15;
  }
  return CUnknown::QueryInterface((PhoneCallAudio *)((char *)this + 24), a2, a3);
}
