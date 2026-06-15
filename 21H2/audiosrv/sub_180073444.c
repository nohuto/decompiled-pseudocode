/*
 * XREFs of sub_180073444 @ 0x180073444
 * Callers:
 *     sub_180074000 @ 0x180074000 (sub_180074000.c)
 * Callees:
 *     sub_1800087F4 @ 0x1800087F4 (sub_1800087F4.c)
 *     sub_180009DE0 @ 0x180009DE0 (sub_180009DE0.c)
 *     sub_180036510 @ 0x180036510 (sub_180036510.c)
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z @ 0x1800386EC (-getZName@UnDecorator@@CA-AVDName@@_N0@Z.c)
 *     sub_18005F1D4 @ 0x18005F1D4 (sub_18005F1D4.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_180073BA4 @ 0x180073BA4 (sub_180073BA4.c)
 *     sub_180073D04 @ 0x180073D04 (sub_180073D04.c)
 *     sub_1801052C0 @ 0x1801052C0 (sub_1801052C0.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180073444(char **a1)
{
  int v2; // eax
  int v3; // eax
  char *v4; // rbx
  bool v5; // al
  char *v6; // rdx
  signed int LastError; // eax
  int v8; // r8d
  int v9; // r9d
  char *v10; // rax
  ULONGLONG v11; // r8
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  signed int v14; // [rsp+40h] [rbp+8h] BYREF
  char *v15; // [rsp+48h] [rbp+10h]

  sub_18005F1D4(*a1, 0LL);
  if ( *((_DWORD *)a1 + 2) == 1 )
  {
    UnDecorator::getZName((__int64)*a1);
    if ( (*a1)[209] )
    {
      v2 = sub_180073BA4(*a1);
      if ( v2 < 0 )
        sub_18006D26C((int)retaddr, 469, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v2);
      v3 = sub_180073D04(*a1);
      if ( v3 < 0 )
        sub_18006D26C((int)retaddr, 473, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v3);
    }
    else if ( *((_QWORD *)*a1 + 13) )
    {
      v4 = (char *)OpenEventW(0x100002u, 0, L"Global\\Client_Atmos_Check_Event");
      v15 = v4;
      v5 = 0;
      if ( v4 )
        v5 = WaitForSingleObject(v4, 0) == 0;
      v6 = *a1;
      if ( v5 )
      {
        v6[99] = 1;
        sub_180036510((ULONGLONG)*a1, 1);
      }
      else if ( !RegisterWaitForSingleObject(
                   (PHANDLE)v6 + 14,
                   *((HANDLE *)v6 + 13),
                   (WAITORTIMERCALLBACK)Callback,
                   v6,
                   0xFFFFFFFF,
                   0x18u) )
      {
        if ( (unsigned int)dword_18019C4F0 > 2 )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          v14 = LastError;
          sub_1801052C0((unsigned int)&dword_18019C4F0, (unsigned int)&unk_18016CAAA, v8, v9, (__int64)&v14);
        }
        (*a1)[99] = 1;
      }
      if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v4);
    }
    sub_1800087F4(*a1);
  }
  (*a1)[97] = 1;
  v10 = *a1;
  (*a1)[96] = 1;
  if ( (*a1)[209] )
  {
    LOBYTE(v10) = sub_180009DE0((__int64)*a1);
    if ( !(_BYTE)v10 )
      LOBYTE(v10) = sub_180036510(v11, 1);
  }
  return (char)v10;
}
