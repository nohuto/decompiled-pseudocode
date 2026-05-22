/*
 * XREFs of ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x180148A84
 * Callers:
 *     ?RuntimeClassInitialize@HotKeyClient@@QEAAJPEAUIHotKeyClientOwner@@_N@Z @ 0x180148558 (-RuntimeClassInitialize@HotKeyClient@@QEAAJPEAUIHotKeyClientOwner@@_N@Z.c)
 *     ?RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ @ 0x1801A17A8 (-RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?Assign@SharedMessagePortRefPtr@@IEAAPEAUIMessagePortStore@@PEAU2@@Z @ 0x180148968 (-Assign@SharedMessagePortRefPtr@@IEAAPEAUIMessagePortStore@@PEAU2@@Z.c)
 *     ?SecurityShim_SharedMessagePortSecurity@SharedMessagePortRefPtr@@SAHPEAPEAX@Z @ 0x180148C18 (-SecurityShim_SharedMessagePortSecurity@SharedMessagePortRefPtr@@SAHPEAPEAX@Z.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x180148CE0 (McTemplateU0sqq_EventWriteTransfer.c)
 */

__int64 __fastcall SharedMessagePortRefPtr::Initialize(SharedMessagePortRefPtr *a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // ebx
  int v6; // r9d
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  const wchar_t *v10; // rax
  const wchar_t *v11; // rdx
  int v12; // ecx
  HLOCAL hMem; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-18h] BYREF
  const wchar_t *v16; // [rsp+40h] [rbp-10h]
  struct IMessagePortStore *v17; // [rsp+80h] [rbp+30h] BYREF
  __int64 v18; // [rsp+88h] [rbp+38h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  hMem = 0LL;
  v2 = CoreUIClientCreate(&v18);
  v5 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_22;
    v6 = 113;
LABEL_4:
    McTemplateU0sqq_EventWriteTransfer(v4, v3, (unsigned int)"SharedMessagePortRefPtr::Initialize", v6, v2);
    goto LABEL_22;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, struct IMessagePortStore **))(*(_QWORD *)v18 + 56LL))(v18, &v17);
  v5 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_22;
    v6 = 116;
    goto LABEL_4;
  }
  v7 = SharedMessagePortRefPtr::SecurityShim_SharedMessagePortSecurity(&hMem);
  v5 = v7 | 0x10000000;
  if ( v7 >= 0 )
  {
    v10 = L"Input\\Core.AlpcPort\\Server";
    if ( L"Input\\Core.AlpcPort\\Server" )
    {
      v11 = L"Input\\Core.AlpcPort\\Server";
      v16 = L"Input\\Core.AlpcPort\\Server";
      v12 = 0;
      while ( *v10 )
      {
        ++v10;
        ++v12;
      }
      v15 = v12 | 0x80000000;
    }
    else
    {
      v11 = 0LL;
      v16 = 0LL;
    }
    v2 = (*(__int64 (__fastcall **)(struct IMessagePortStore *, unsigned __int64, HLOCAL, __int64))(*(_QWORD *)v17 + 24LL))(
           v17,
           (unsigned __int64)&v15 & -(__int64)(v11 != 0LL),
           hMem,
           (__int64)a1 + 8);
    v5 = v2;
    if ( v2 >= 0 )
    {
      SharedMessagePortRefPtr::Assign(a1, v17);
      goto LABEL_22;
    }
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_22;
    v6 = 124;
    goto LABEL_4;
  }
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    McTemplateU0sqq_EventWriteTransfer(v9, v8, (unsigned int)"SharedMessagePortRefPtr::Initialize", 119, v7);
LABEL_22:
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v18 = 0LL;
  }
  if ( v17 )
  {
    (*(void (__fastcall **)(struct IMessagePortStore *))(*(_QWORD *)v17 + 16LL))(v17);
    v17 = 0LL;
  }
  LocalFree(hMem);
  return v5;
}
