/*
 * XREFs of ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x14004E968
 * Callers:
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14000F990 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 * Callees:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14004EC98 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 */

int __fastcall CSubmixImpl::CreateFormatConverterPipe(CSubmixImpl *this, struct tWAVEFORMATEX *a2, __int64 a3)
{
  struct IDeviceGraphObjectCache *v4; // rdx
  int v5; // eax
  int v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  struct tWAVEFORMATEX *v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  v8 = *((_QWORD *)this + 27);
  v4 = (struct IDeviceGraphObjectCache *)*((_QWORD *)this + 33);
  v11 = *((_QWORD *)this + 1);
  v5 = *((_DWORD *)this + 64);
  v10 = a3;
  v9 = a2;
  v7 = v5;
  return CFormatConverterPipe::Initialize(
           (CSubmixImpl *)((char *)this + 272),
           v4,
           a2,
           (const struct FORMAT_CONVERTER_PIPE_DESCRIPTOR *)&v7);
}
