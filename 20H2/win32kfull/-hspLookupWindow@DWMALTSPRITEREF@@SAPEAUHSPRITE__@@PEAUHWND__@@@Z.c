/*
 * XREFs of ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00C33E0
 * Callers:
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00C337C (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0110990 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0090670 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00906A4 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

__int64 __fastcall DWMALTSPRITEREF::hspLookupWindow(HWND a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  Buffer[0] = a1;
  Buffer[1] = 0LL;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v5, (struct DwmState *)((char *)g_pDwmState + 72));
  v2 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer);
  if ( v2 )
    v1 = v2[1];
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v5);
  return v1;
}
