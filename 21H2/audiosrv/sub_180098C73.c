/*
 * XREFs of sub_180098C73 @ 0x180098C73
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800FA128 @ 0x1800FA128 (sub_1800FA128.c)
 */

void __fastcall sub_180098C73(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char *pv,
        __int64 a8,
        int a9,
        __int64 a10)
{
  unsigned int v10; // esi
  __int64 v11; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  _QWORD *v14; // rcx

  v10 = a6;
  if ( a6 >= 0 )
  {
    v11 = a8;
    *(_OWORD *)(pv + 8) = *(_OWORD *)a10;
    *((_DWORD *)pv + 6) = *(_DWORD *)(a10 + 16);
    ThreadpoolWork = CreateThreadpoolWork(sub_1800FC860, pv, 0LL);
    *((_QWORD *)pv + 5) = ThreadpoolWork;
    if ( ThreadpoolWork )
    {
      SubmitThreadpoolWork(ThreadpoolWork);
      v11 = 0LL;
    }
    else
    {
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
      v14 = off_18019C348;
      if ( off_18019C348 == (_UNKNOWN *)&off_18019C348
        || (*((_DWORD *)off_18019C348 + 7) & 0x800000) == 0
        || *((_BYTE *)off_18019C348 + 25) < 2u )
      {
LABEL_12:
        if ( (v10 & 0x80000000) != 0
          && v14 != &off_18019C348
          && (*((_DWORD *)v14 + 7) & 0x800000) != 0
          && *((_BYTE *)v14 + 25) >= 2u )
        {
          sub_1800BB4E0(v14[2], 38LL, &unk_180172650, v10);
        }
        if ( v11 )
          sub_1800FA128(v11);
        JUMPOUT(0x1800358B6LL);
      }
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 37LL, &unk_180172650, v10);
    }
  }
  else
  {
    sub_1800FA128(pv);
    v11 = a8;
  }
  v14 = off_18019C348;
  goto LABEL_12;
}
