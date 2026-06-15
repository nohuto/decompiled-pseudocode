/*
 * XREFs of sub_1800086D8 @ 0x1800086D8
 * Callers:
 *     sub_180007F20 @ 0x180007F20 (sub_180007F20.c)
 * Callees:
 *     sub_1800087F4 @ 0x1800087F4 (sub_1800087F4.c)
 *     sub_180008FF0 @ 0x180008FF0 (sub_180008FF0.c)
 *     sub_180134A80 @ 0x180134A80 (sub_180134A80.c)
 *     sub_1801363FC @ 0x1801363FC (sub_1801363FC.c)
 */

void __fastcall sub_1800086D8(PVOID *a1)
{
  _BYTE *v2; // rcx
  PVOID v3; // rdx
  _BYTE *v4; // rax
  const WCHAR *v5; // r8
  char v6; // cl
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  int v8; // eax
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  v2 = *a1;
  v3 = a1[3];
  if ( v2[209] )
  {
    *(_DWORD *)a1[2] = sub_1801363FC(v2, v3);
    if ( !*((_BYTE *)*a1 + 99) && (unsigned __int8)sub_180134A80(*a1) )
      *((_BYTE *)*a1 + 99) = 1;
  }
  else
  {
    *(_DWORD *)a1[2] = sub_180008FF0(v2, v3);
    if ( *(int *)a1[2] >= 0 )
    {
      v4 = *a1;
      v5 = L"AudioSrvLicenseResult";
      pcbData = 4;
      v6 = v4[100];
      pvData = 0;
      if ( !v6 )
        v5 = L"AudioDGLicenseResult";
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Spatial\\AtmosLicenseDebug",
        v5,
        0x10u,
        0LL,
        &pvData,
        &pcbData);
      if ( pvData < 0 )
      {
        *(_DWORD *)a1[1] = pvData;
        *((_DWORD *)a1[1] + 1) = pvData;
        *((_DWORD *)a1[1] + 2) = pvData;
        *((_DWORD *)a1[1] + 3) = pvData;
      }
      v7 = (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 56);
      EnterCriticalSection(v7);
      v8 = *((_DWORD *)*a1 + 46);
      if ( (v8 == 5 || v8 == 8) && !*((_BYTE *)*a1 + 99) )
      {
        *((_BYTE *)*a1 + 99) = 1;
        *(_BYTE *)a1[3] = 1;
      }
      if ( v7 )
        LeaveCriticalSection(v7);
    }
  }
  if ( *((_BYTE *)*a1 + 100) )
    sub_1800087F4(*a1);
}
