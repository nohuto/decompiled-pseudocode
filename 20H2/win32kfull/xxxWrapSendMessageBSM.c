/*
 * XREFs of xxxWrapSendMessageBSM @ 0x1C0019540
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendMessageBSM @ 0x1C0019630 (xxxSendMessageBSM.c)
 *     IsPrivileged @ 0x1C001A7F0 (IsPrivileged.c)
 */

__int64 __fastcall xxxWrapSendMessageBSM(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, ULONG64 a5)
{
  __int64 result; // rax
  __int128 v10; // [rsp+48h] [rbp-70h]
  __int128 v11; // [rsp+58h] [rbp-60h] BYREF
  __int128 v12; // [rsp+68h] [rbp-50h]
  __int64 v13; // [rsp+78h] [rbp-40h]

  if ( a5 >= MmUserProbeAddress )
    *(_DWORD *)MmUserProbeAddress = 0;
  *(_OWORD *)a5 = *(_OWORD *)a5;
  *(_OWORD *)(a5 + 16) = *(_OWORD *)(a5 + 16);
  *(_QWORD *)(a5 + 32) = *(_QWORD *)(a5 + 32);
  v11 = *(_OWORD *)a5;
  v10 = *(_OWORD *)(a5 + 16);
  v12 = v10;
  v13 = *(_QWORD *)(a5 + 32);
  if ( (v11 & 0x10) != 0 && !(unsigned int)IsPrivileged(psTcb) )
  {
    LODWORD(v11) = v11 & 0xFFFFFFEF;
    *(_OWORD *)a5 = v11;
    *(_OWORD *)(a5 + 16) = v10;
    *(_QWORD *)(a5 + 32) = v13;
  }
  result = (int)xxxSendMessageBSM(a1, a2, a3, a4, &v11, 0);
  if ( !(_DWORD)result && (BYTE4(v11) & 1) != 0 )
  {
    *(_OWORD *)a5 = v11;
    *(_OWORD *)(a5 + 16) = v12;
    *(_QWORD *)(a5 + 32) = v13;
  }
  return result;
}
