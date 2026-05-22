/*
 * XREFs of ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x1800385D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033C80 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?AttachDevice@RIMDeviceCollection@@AEAAJKPEAX0KPEAPEAVRIMDevice@@@Z @ 0x180038654 (-AttachDevice@RIMDeviceCollection@@AEAAJKPEAX0KPEAPEAVRIMDevice@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x180090698 (-DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x180090A30 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 *     ?ResetDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x180090CD4 (-ResetDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 */

void __fastcall RIMDeviceCollection::OnDeviceChangeCallbackStatic(
        void *a1,
        void *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int16 a7,
        unsigned __int16 a8,
        RIMDeviceCollection *a9)
{
  int v9; // r9d
  int v10; // r9d
  RIMDeviceCollection *v11; // rbx
  int Device; // eax
  void *v13; // rcx
  __int64 v14; // rdx
  RIMDeviceCollection *v15; // rbx
  DWORD v16; // edx
  void *v17; // rcx
  int v18; // [rsp+20h] [rbp-18h]
  struct RIMDevice **v19; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct RIMDevice *v21; // [rsp+40h] [rbp+8h] BYREF

  v9 = a4 - 2;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 != 2 )
        return;
      v21 = 0LL;
      Device = RIMDeviceCollection::FindDevice(a9, 0, a2, &v21, 0LL);
      if ( Device < 0 )
      {
        v14 = 397LL;
LABEL_13:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v14,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
          (const char *)(unsigned int)Device,
          v18);
        return;
      }
      Device = RIMDeviceCollection::ResetDevice(a9, v21);
      if ( Device < 0 )
      {
        v14 = 399LL;
        goto LABEL_13;
      }
    }
    else
    {
      v15 = a9;
      v21 = 0LL;
      Device = RIMDeviceCollection::FindDevice(a9, 0, a2, &v21, 0LL);
      if ( Device < 0 )
      {
        v14 = 353LL;
        goto LABEL_13;
      }
      v17 = (void *)*((_QWORD *)v15 + 5);
      if ( v17 )
      {
        if ( !WaitForSingleObject(v17, v16) )
        {
          *((_BYTE *)v15 + 2736) = 1;
          Device = RIMDeviceCollection::OnReadCallbackStatic(v15, 0, 0LL);
          if ( Device < 0 )
          {
            v14 = 378LL;
            goto LABEL_13;
          }
        }
      }
      Device = RIMDeviceCollection::DetachDevice(v15, v21);
      if ( Device < 0 )
      {
        v14 = 382LL;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v11 = a9;
    if ( !*((_QWORD *)a9 + 10) )
      *((_QWORD *)a9 + 10) = a1;
    Device = RIMDeviceCollection::AttachDevice(v11, (unsigned int)a2, a1, a2, a5, v19);
    if ( Device < 0 )
    {
      v14 = 332LL;
      goto LABEL_13;
    }
    v13 = (void *)*((_QWORD *)v11 + 7);
    if ( v13 )
    {
      *((_BYTE *)v11 + 2736) = 1;
      SetEvent(v13);
    }
  }
}
