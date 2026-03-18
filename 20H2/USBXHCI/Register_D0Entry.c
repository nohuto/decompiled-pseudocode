/*
 * XREFs of Register_D0Entry @ 0x1C0015068
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014CE0 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0013F1C (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_D0Entry(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // rbx
  int Ulong; // eax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  unsigned int *v14; // rbx
  int v15; // eax
  int v16; // eax

  v2 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v2 + 352) & 2) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    Ulong = XilRegister_ReadUlong(a1, (unsigned int *)(v4 + 32912));
    XilRegister_WriteUlong(a1, (_DWORD *)(v4 + 32912), Ulong & 0xFFFFEFFF);
    v2 = *(_QWORD *)(a1 + 8);
  }
  if ( (*(_BYTE *)(v2 + 352) & 1) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = XilRegister_ReadUlong(a1, (unsigned int *)(v6 + 32988));
    XilRegister_WriteUlong(a1, (_DWORD *)(v6 + 32988), v7 & 0xFFFFFF7D);
    v2 = *(_QWORD *)(a1 + 8);
  }
  if ( (*(_QWORD *)(v2 + 336) & 0x400000000000LL) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    v9 = XilRegister_ReadUlong(a1, (unsigned int *)(v8 + 32916));
    XilRegister_WriteUlong(a1, (_DWORD *)(v8 + 32916), v9 | 0x200000);
    v2 = *(_QWORD *)(a1 + 8);
  }
  if ( (*(_BYTE *)(v2 + 352) & 4) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    v11 = XilRegister_ReadUlong(a1, (unsigned int *)(v10 + 16500));
    XilRegister_WriteUlong(a1, (_DWORD *)(v10 + 16500), v11 | 0x8000);
    v2 = *(_QWORD *)(a1 + 8);
  }
  if ( (*(_BYTE *)(v2 + 352) & 8) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 24);
    v13 = XilRegister_ReadUlong(a1, (unsigned int *)(v12 + 16500));
    XilRegister_WriteUlong(a1, (_DWORD *)(v12 + 16500), v13 & 0xFF7FFFFF);
    v2 = *(_QWORD *)(a1 + 8);
  }
  if ( (*(_QWORD *)(v2 + 336) & 0x100000000000000LL) != 0 )
  {
    v14 = (unsigned int *)(*(_QWORD *)(a1 + 24) + 32932LL);
    v15 = XilRegister_ReadUlong(a1, v14);
    XilRegister_WriteUlong(a1, v14, v15 | 0x10000000);
    KeStallExecutionProcessor(0x32u);
    v16 = XilRegister_ReadUlong(a1, v14);
    XilRegister_WriteUlong(a1, v14, v16 & 0xEFFFFFFF);
  }
  return 0LL;
}
