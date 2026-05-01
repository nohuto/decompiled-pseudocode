/*
 * XREFs of sub_180007470 @ 0x180007470
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800041A8 @ 0x1800041A8 (sub_1800041A8.c)
 *     sub_180004674 @ 0x180004674 (sub_180004674.c)
 *     sub_1800065B0 @ 0x1800065B0 (sub_1800065B0.c)
 *     sub_180006AA8 @ 0x180006AA8 (sub_180006AA8.c)
 *     sub_180006E34 @ 0x180006E34 (sub_180006E34.c)
 *     sub_180006F98 @ 0x180006F98 (sub_180006F98.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180007470(unsigned int a1, int a2, unsigned int a3)
{
  int v3; // esi
  unsigned int v4; // ebx
  int v6; // eax
  FARPROC RtlNotifyFeatureUsage; // rax
  HMODULE ModuleHandleW; // rax
  __int64 v9; // r8
  int v10; // eax
  HANDLE ProcessHeap; // rax
  unsigned int v12; // [rsp+30h] [rbp-168h] BYREF
  int v13; // [rsp+34h] [rbp-164h]
  _BYTE v14[56]; // [rsp+40h] [rbp-158h] BYREF
  LPVOID lpMem; // [rsp+78h] [rbp-120h]
  int v16; // [rsp+90h] [rbp-108h]
  _BYTE v17[208]; // [rsp+A0h] [rbp-F8h] BYREF

  v3 = (unsigned int)a2 >> 31;
  v4 = a2 & 0x7FFFFFFF;
  if ( a1 || a3 || v4 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      sub_180006E34((RTL_SRWLOCK *)&byte_18005A038, a1, a2, a3);
    }
    else if ( a3 || v4 == 254 )
    {
      sub_180006AA8(&byte_18005A038, a1, v4, a3);
    }
    else
    {
      v12 = a1;
      v13 = (unsigned __int16)a2;
      if ( a2 < 0 )
        HIWORD(v13) |= 1u;
      RtlNotifyFeatureUsage = (FARPROC)qword_18005AB58;
      if ( qword_18005AB58 )
        goto LABEL_21;
      ModuleHandleW = hModule;
      if ( !hModule )
      {
        ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
        hModule = ModuleHandleW;
      }
      RtlNotifyFeatureUsage = GetProcAddress(ModuleHandleW, "RtlNotifyFeatureUsage");
      qword_18005AB58 = (__int64)RtlNotifyFeatureUsage;
      if ( RtlNotifyFeatureUsage )
LABEL_21:
        v10 = ((__int64 (__fastcall *)(unsigned int *))RtlNotifyFeatureUsage)(&v12);
      else
        v10 = -1073741511;
      if ( v10 )
      {
        if ( !(unsigned int)sub_1800041A8((__int64)v14, 0, v9, (__int64)v17) )
        {
          sub_180004674((__int64)v14, a1, (unsigned __int16)v4, v3);
          if ( v16 )
          {
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, lpMem);
          }
        }
      }
    }
  }
  else if ( !byte_18005AC18 )
  {
    v6 = (int)qword_18005ABE0;
    if ( qword_18005ABE0 )
      v6 = (unsigned __int8)qword_18005ABE0();
    if ( !v6 && sub_180006F98((RTL_SRWLOCK *)&byte_18005A038) )
      sub_1800065B0((LPCRITICAL_SECTION)&qword_18005A050[25], qword_18005A050);
  }
}
