/*
 * XREFs of PopFxAcpiRegisterDevice @ 0x14057E2B8
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x14057DEA8 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     PopFxCreateDeviceCommon @ 0x1403BED38 (PopFxCreateDeviceCommon.c)
 *     PopFxDestroyDeviceCommon @ 0x1403CD8A4 (PopFxDestroyDeviceCommon.c)
 *     PopFxInsertAcpiDevice @ 0x14056AFA8 (PopFxInsertAcpiDevice.c)
 *     PopPluginAcpiNotificationStrict @ 0x14057FDDC (PopPluginAcpiNotificationStrict.c)
 */

__int64 __fastcall PopFxAcpiRegisterDevice(__int64 a1, ULONG_PTR a2, __int64 a3, PVOID **a4, _QWORD *a5)
{
  int v8; // eax
  PVOID *v9; // rbx
  int v10; // edi
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID P; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter4[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+58h] [rbp-8h]

  P = 0LL;
  v19 = 0LL;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  v18 = 0LL;
  v8 = PopFxCreateDeviceCommon(a1, a2, a3, 4, &P);
  v9 = (PVOID *)P;
  v10 = v8;
  if ( v8 < 0 )
    goto LABEL_7;
  v11 = *(_OWORD *)(a3 + 16);
  *(_OWORD *)BugCheckParameter4 = *(_OWORD *)a3;
  v12 = *(_QWORD *)(a3 + 32);
  *((_QWORD *)&v18 + 1) = *((_QWORD *)&v11 + 1);
  *(_QWORD *)&v18 = P;
  v19 = v12;
  PopPluginAcpiNotificationStrict(a2, 3uLL, (ULONG_PTR)BugCheckParameter4);
  if ( !*((_QWORD *)&v18 + 1) )
    goto LABEL_5;
  PopFxInsertAcpiDevice(v14, v13, (__int64)v9);
  if ( *((_QWORD *)&v18 + 1) )
  {
    v9[10] = (PVOID)a2;
    v9[11] = (PVOID)*((_QWORD *)&v18 + 1);
    *a5 = *((_QWORD *)&v18 + 1);
    *a4 = v9;
  }
  else
  {
LABEL_5:
    v10 = -1073741823;
    *a4 = 0LL;
    *a5 = 0LL;
  }
  if ( v10 < 0 )
  {
LABEL_7:
    if ( v9 )
    {
      v9[10] = 0LL;
      v9[11] = 0LL;
      PopFxDestroyDeviceCommon(v9, 2);
    }
  }
  return (unsigned int)v10;
}
