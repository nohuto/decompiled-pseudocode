/*
 * XREFs of PiDevCfgResolveVariableConstant @ 0x140805210
 * Callers:
 *     PiDevCfgResolveVariable @ 0x14069A1F8 (PiDevCfgResolveVariable.c)
 * Callees:
 *     PnpValidateRegistryValue @ 0x1403965A0 (PnpValidateRegistryValue.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IopGetRegistryValue @ 0x14067B838 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgResolveVariableConstant(__int64 a1, void *a2, __int64 a3)
{
  NTSTATUS RegistryValue; // eax
  _DWORD *v5; // rbx
  unsigned int v6; // edi
  unsigned int v7; // ebp
  int v8; // r15d
  void *Pool2; // rax
  void *v10; // rsi
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"Value", 0, &P);
  v5 = P;
  v6 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( PnpValidateRegistryValue(P) )
    {
      v7 = v5[3];
      v8 = v5[1];
      if ( !v7 )
      {
        v10 = 0LL;
        goto LABEL_6;
      }
      Pool2 = (void *)ExAllocatePool2(256LL, v7, 1667526736LL);
      v10 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, (char *)v5 + (unsigned int)v5[2], v7);
LABEL_6:
        *(_DWORD *)(a3 + 32) = v8;
        *(_DWORD *)(a3 + 36) = v7;
        *(_QWORD *)(a3 + 40) = v10;
        goto LABEL_7;
      }
      v6 = -1073741670;
    }
    else
    {
      v6 = -1073741823;
    }
  }
LABEL_7:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
