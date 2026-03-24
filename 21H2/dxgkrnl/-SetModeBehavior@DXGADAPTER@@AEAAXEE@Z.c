/*
 * XREFs of ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x1C019E0F0
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01845A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C0192874 (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 *     ?DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z @ 0x1C019E17C (-DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z.c)
 */

void __fastcall DXGADAPTER::SetModeBehavior(DXGADAPTER *this, __int64 a2, char a3)
{
  int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // [rsp+20h] [rbp-79h] BYREF
  struct _UNICODE_STRING v10; // [rsp+28h] [rbp-71h] BYREF
  struct _UNICODE_STRING v11; // [rsp+38h] [rbp-61h] BYREF
  _DXGKARG_CONTROLMODEBEHAVIOR v12; // [rsp+48h] [rbp-51h] BYREF
  __int128 v13; // [rsp+58h] [rbp-41h] BYREF
  int v14; // [rsp+68h] [rbp-31h]
  _OWORD v15[6]; // [rsp+70h] [rbp-29h] BYREF
  wchar_t v16; // [rsp+D0h] [rbp+37h]

  v3 = 0;
  *(_QWORD *)&v12.Request.0 = 0LL;
  v12.NotSatisfied.Value = 0;
  if ( a3 )
  {
    v15[0] = *(_OWORD *)L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\DWM";
    v16 = aRegistryMachin[48];
    v15[2] = *(_OWORD *)L"e\\SOFTWARE\\Microsoft\\Windows\\DWM";
    v15[1] = *(_OWORD *)L"y\\Machine\\SOFTWARE\\Microsoft\\Windows\\DWM";
    v11.Buffer = (wchar_t *)v15;
    v15[4] = *(_OWORD *)L"soft\\Windows\\DWM";
    v14 = *(_DWORD *)L"r";
    v15[3] = *(_OWORD *)L"RE\\Microsoft\\Windows\\DWM";
    v13 = *(_OWORD *)L"HighColor";
    v9 = 0;
    v15[5] = *(_OWORD *)L"dows\\DWM";
    *(_QWORD *)&v11.Length = 6422624LL;
    *(_QWORD *)&v10.Length = 1310738LL;
    v10.Buffer = (wchar_t *)&v13;
    if ( (int)ReadRegistryDwordKeyValue(&v11, &v10, &v9) >= 0 )
    {
      LOBYTE(v3) = v9 != 0;
      v12.Request.Value = v3 | v12.Request.Value & 0xFFFFFFFE;
    }
  }
  else
  {
    v12.Request.Value = 1;
  }
  v6 = (int)DXGADAPTER::DdiControlModeBehavior(this, &v12);
  v7 = (unsigned int)v6 + 0x80000000;
  if ( (int)v7 >= 0 && (_DWORD)v6 != -1073741637 )
  {
    v8 = WdLogNewEntry5_WdError(v7, v5);
    *(_QWORD *)(v8 + 24) = v6;
    WdLogEvent5_WdError(v8);
  }
}
