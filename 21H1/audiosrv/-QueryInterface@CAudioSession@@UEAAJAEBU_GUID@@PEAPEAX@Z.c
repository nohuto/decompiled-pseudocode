/*
 * XREFs of ?QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800056A0
 * Callers:
 *     ?QueryInterface@CAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074CB0 (-QueryInterface@CAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074CC0 (-QueryInterface@CAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074CD0 (-QueryInterface@CAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074CE0 (-QueryInterface@CAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CACF0 (-QueryInterface@CPerEndpointVolumeAudioSession@@EEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CAD60 (-QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CAudioSession::QueryInterface(CAudioSession *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  char *v8; // rax

  if ( !a3 )
    return 2147500035LL;
  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d31c391d_5718_48c7_b013_24e874adf5dd.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d31c391d_5718_48c7_b013_24e874adf5dd.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d31c391d_5718_48c7_b013_24e874adf5dd.Data4;
  if ( !v3 )
  {
    *a3 = this;
    (*(void (__fastcall **)(CAudioSession *, const struct _GUID *, void **, CAudioSession *))(*(_QWORD *)this + 8LL))(
      this,
      a2,
      a3,
      this);
    return 0LL;
  }
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d8f0a3ea_c16c_4c58_97bc_5ec84ae597f4.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d8f0a3ea_c16c_4c58_97bc_5ec84ae597f4.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d8f0a3ea_c16c_4c58_97bc_5ec84ae597f4.Data4;
  if ( !v5 )
  {
    if ( this )
    {
      *a3 = (char *)this + 16;
      (*(void (__fastcall **)(CAudioSession *, const struct _GUID *, void **, CAudioSession *))(*(_QWORD *)this + 8LL))(
        this,
        a2,
        a3,
        this);
      return 0LL;
    }
    goto LABEL_21;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c.Data4;
  if ( !v6 )
  {
    v8 = (char *)this + 24;
    if ( !this )
      v8 = 0LL;
    goto LABEL_18;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data4;
  if ( !v7 )
  {
    if ( this )
    {
      v8 = (char *)this + 8;
LABEL_18:
      *a3 = v8;
      (*(void (__fastcall **)(CAudioSession *, const struct _GUID *, void **, CAudioSession *))(*(_QWORD *)this + 8LL))(
        this,
        a2,
        a3,
        this);
      return 0LL;
    }
LABEL_21:
    v8 = 0LL;
    goto LABEL_18;
  }
  return CUnknown::QueryInterface((CAudioSession *)((char *)this + 32), a2, a3);
}
