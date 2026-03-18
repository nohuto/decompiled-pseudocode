/*
 * XREFs of ?GetConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAA?AUDwmTouchInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x18022C300
 * Callers:
 *     ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x18022B124 (-ConfigureInteractionContextIfNecessary@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimi.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800C5B64 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 */

unsigned int *__fastcall CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::GetConfig(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // rax
  unsigned int *v6; // r11
  unsigned int v7; // eax
  unsigned int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // xmm0_8
  int v13; // [rsp+38h] [rbp+10h] BYREF
  int v14; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  *a2 = a3;
  a2[1] = a3;
  a2[2] = 0;
  v6 = a2;
  if ( a3 )
  {
    v8 = *(_DWORD *)(a1 + 112);
    if ( v8 )
    {
      v9 = *(_QWORD *)(a1 + 88);
      while ( a3 >= *(_DWORD *)(v9 + 12 * v4) )
      {
        if ( a3 <= *(_DWORD *)(v9 + 12 * v4 + 4) )
        {
          v10 = 3 * v4;
          v11 = *(_QWORD *)(v9 + 4 * v10);
          LODWORD(v10) = *(_DWORD *)(v9 + 4 * v10 + 8);
          *(_QWORD *)v6 = v11;
          v6[2] = v10;
          break;
        }
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= v8 )
          break;
      }
    }
    anonymous_namespace_::GetTemporaryConfigWithMask(a4, &v13, &v14);
    v6[2] = v13 & v14 | v6[2] & ~v14;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 16);
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 8);
    a2[2] = v7;
  }
  return v6;
}
