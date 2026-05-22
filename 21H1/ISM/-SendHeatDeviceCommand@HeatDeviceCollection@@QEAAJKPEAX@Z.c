/*
 * XREFs of ?SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z @ 0x18009AFE4
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18008EE90 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033C80 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall HeatDeviceCollection::SendHeatDeviceCommand(HeatDeviceCollection *this, int a2, _DWORD *a3)
{
  __int64 v5; // rdx
  int Device; // eax
  int v8; // r8d
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rcx
  int v14; // eax
  _DWORD *v15; // rcx
  unsigned int v16; // [rsp+40h] [rbp-40h]
  _OWORD v17[3]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  int v19; // [rsp+B0h] [rbp+30h] BYREF
  struct RIMDevice *v20; // [rsp+B8h] [rbp+38h] BYREF

  v20 = 0LL;
  v19 = 0;
  if ( !a3 )
  {
    v5 = 191LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v20, 0LL);
  v9 = Device;
  if ( Device >= 0 )
  {
    switch ( *a3 )
    {
      case 1:
        if ( a3[2] != 1 )
        {
          v5 = 233LL;
          goto LABEL_3;
        }
        v14 = NtRIMDeviceIoControl(
                *((_QWORD *)this + 10),
                *((_QWORD *)v20 + 2),
                (unsigned int)a3[4],
                *((_QWORD *)a3 + 3),
                a3[8],
                *((_QWORD *)a3 + 5),
                a3[12],
                &v19,
                v8 & v16);
        v15 = (_DWORD *)*((_QWORD *)a3 + 7);
        v12 = v14;
        if ( v15 )
          *v15 = v19;
        break;
      case 2:
        **((_QWORD **)a3 + 1) = *((_QWORD *)v20 + 2);
        v12 = 0;
        break;
      case 3:
        v13 = *((_QWORD *)this + 10);
        memset(v17, 0, 40);
        v12 = RIMGetDeviceProperties(v13, *((_QWORD *)v20 + 2), v17);
        if ( v12 >= 0 )
        {
          **((_QWORD **)a3 + 1) = *(_QWORD *)&v17[1];
          *(_DWORD *)(*((_QWORD *)a3 + 1) + 8LL) = DWORD2(v17[1]);
        }
        break;
      case 4:
        v10 = a3[4];
        DWORD1(v17[0]) &= v8;
        HIDWORD(v17[0]) &= v8;
        v11 = *((_QWORD *)this + 10);
        DWORD2(v17[0]) = v10;
        *(_QWORD *)&v17[1] = *((_QWORD *)a3 + 1);
        *(_OWORD *)((char *)&v17[1] + 8) = 0LL;
        LODWORD(v17[0]) = 4;
        v12 = RIMGetDeviceProperties(v11, *((_QWORD *)v20 + 2), v17);
        if ( v12 >= 0 )
          a3[4] = DWORD2(v17[0]);
        break;
      default:
        v5 = 289LL;
        goto LABEL_3;
    }
    a3[16] = v12;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return v9;
  }
}
