/*
 * XREFs of ?QueryInterface@GestureSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180182E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureSession::QueryInterface(GestureSession *this, const struct _GUID *a2, GestureSession **a3)
{
  GestureSession *v3; // rdi
  __int64 v4; // rax
  GestureSession *v6; // rbx
  __int64 v7; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  v6 = this;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
    goto LABEL_8;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_771487fa_af98_46fe_9c2a_09b9988c067a.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_771487fa_af98_46fe_9c2a_09b9988c067a.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_771487fa_af98_46fe_9c2a_09b9988c067a.Data4;
  if ( v7 )
  {
    v6 = 0LL;
  }
  else
  {
LABEL_8:
    v3 = this;
    if ( this )
      (*(void (__fastcall **)(GestureSession *))(*(_QWORD *)this + 8LL))(this);
  }
  *a3 = v3;
  return v6 == 0LL ? 0x80004002 : 0;
}
