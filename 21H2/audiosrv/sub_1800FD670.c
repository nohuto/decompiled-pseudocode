/*
 * XREFs of sub_1800FD670 @ 0x1800FD670
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800CB200 @ 0x1800CB200 (sub_1800CB200.c)
 *     sub_1800FA07C @ 0x1800FA07C (sub_1800FA07C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800FD670(__int64 a1, int a2, int a3, const wchar_t *a4)
{
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  _QWORD *v11; // rbx
  signed int v12; // esi
  _UNKNOWN **v13; // rcx
  __int64 v14; // rax
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  signed int *v17; // rbx
  ATL::CAtlException *v18; // [rsp+40h] [rbp-38h] BYREF

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CB200(*((_QWORD *)off_18019C348 + 2), 0x1Bu, (__int64)&unk_180172650, a4);
  }
  if ( a3 )
    return 0LL;
  v9 = sub_18006A18C(0x20uLL);
  v10 = v9;
  if ( v9 )
  {
    sub_180003E08(v9, (__int64)&qword_18019F818);
    v10[2] = a1;
    if ( a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v10[3] = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = v10;
  if ( !v10 )
  {
    v12 = -2147024882;
    v13 = (_UNKNOWN **)off_18019C348;
LABEL_32:
    if ( v13 != &off_18019C348 && (*((_DWORD *)v13 + 7) & 0x800000) != 0 && *((_BYTE *)v13 + 25) >= 2u )
      sub_1800BB4E0((__int64)v13[2], 0x1Du, (__int64)&unk_180172650, v12);
    goto LABEL_36;
  }
  *((_DWORD *)v10 + 2) = a2;
  v12 = 0;
  if ( a4 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a4[v14] );
  }
  else
  {
    LODWORD(v14) = 0;
  }
  try
  {
    sub_18002BB70(v10, a4, v14);
  }
  catch ( ATL::CAtlException *v18 )
  {
    v17 = (signed int *)v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      o__resetstkoflw();
    v12 = *v17;
    if ( *v17 < 0 )
    {
      sub_1800FA07C(v10);
      v11 = v10;
LABEL_30:
      v13 = (_UNKNOWN **)off_18019C348;
      goto LABEL_31;
    }
    v11 = v10;
  }
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)sub_1800FBEE0, v10, 0LL);
  v10[3] = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v11 = 0LL;
    goto LABEL_30;
  }
  LastError = GetLastError();
  v12 = LastError;
  if ( LastError > 0 )
    v12 = (unsigned __int16)LastError | 0x80070000;
  v13 = (_UNKNOWN **)off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x1Cu, (__int64)&unk_180172650, v12);
    goto LABEL_30;
  }
LABEL_31:
  if ( v12 < 0 )
    goto LABEL_32;
LABEL_36:
  if ( v11 )
    sub_1800FA07C(v11);
  return (unsigned int)v12;
}
