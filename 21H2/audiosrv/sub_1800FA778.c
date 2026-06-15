/*
 * XREFs of sub_1800FA778 @ 0x1800FA778
 * Callers:
 *     sub_1800FB1A4 @ 0x1800FB1A4 (sub_1800FB1A4.c)
 *     sub_1800FC184 @ 0x1800FC184 (sub_1800FC184.c)
 *     sub_1800FDD70 @ 0x1800FDD70 (sub_1800FDD70.c)
 * Callees:
 *     sub_18005E178 @ 0x18005E178 (sub_18005E178.c)
 *     sub_180062288 @ 0x180062288 (sub_180062288.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800FA010 @ 0x1800FA010 (sub_1800FA010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800FA778(__int64 a1, __int64 a2)
{
  signed int v4; // ebx
  int v5; // eax
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  int v11; // [rsp+68h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  pv = 0LL;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x42u, (__int64)&unk_180172650);
  }
  v4 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))a2)(a2, &unk_18015B660, &v13);
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 24LL))(v13, &v11);
    if ( v4 >= 0 )
    {
      v5 = v11;
      if ( v11 == 1 )
      {
        if ( sub_180062288(a2, &pv, 0LL) )
        {
LABEL_12:
          v6 = sub_18006A18C(0x18uLL);
          v7 = v6;
          if ( v6 )
          {
            *v6 = a2;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
            v7[1] = a1;
            if ( a1 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
            v7[2] = 0LL;
          }
          else
          {
            v7 = 0LL;
          }
          if ( v7 )
          {
            ThreadpoolWork = CreateThreadpoolWork(sub_1800FA9A0, v7, 0LL);
            v7[2] = ThreadpoolWork;
            if ( ThreadpoolWork )
            {
              SubmitThreadpoolWork(ThreadpoolWork);
            }
            else
            {
              LastError = GetLastError();
              v4 = LastError;
              if ( LastError > 0 )
                v4 = (unsigned __int16)LastError | 0x80070000;
              if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
                && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
                && *((_BYTE *)off_18019C348 + 25) >= 2u )
              {
                sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x43u, (__int64)&unk_180172650, v4);
              }
              sub_1800FA010(v7);
            }
          }
          else
          {
            v4 = -2147024882;
          }
          goto LABEL_28;
        }
        v5 = v11;
      }
      if ( v5 || !sub_18005E178(a1, a2, &pv) )
        goto LABEL_28;
      goto LABEL_12;
    }
  }
LABEL_28:
  CoTaskMemFree(pv);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v4;
}
