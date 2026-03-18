/*
 * XREFs of sub_1C0015704 @ 0x1C0015704
 * Callers:
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C001CC84 @ 0x1C001CC84 (sub_1C001CC84.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C0059AEC @ 0x1C0059AEC (sub_1C0059AEC.c)
 */

__int64 __fastcall sub_1C0015704(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD *v7; // r14
  int v8; // edi
  int v9; // edi
  _DWORD *v10; // rax
  int v12; // edi
  __int64 v13; // rdx
  int v14; // eax

  v6 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 12, (__int64)&unk_1C0062110);
  v7 = sub_1C000F050(a1);
  v8 = a2 - 1;
  if ( !v8 )
  {
    v13 = 2LL;
    goto LABEL_16;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v12 = v9 - 1;
    if ( v12 )
    {
      if ( v12 != 3 )
      {
        sub_1C001CC84(a3, 2LL);
        return (unsigned int)-1073741823;
      }
      sub_1C001CC84(a3, 3LL);
      sub_1C0012400(a1, 0LL, 0LL, &stru_1C0061E68);
      KeWaitForSingleObject(v7 + 846, Executive, 0, 0, 0LL);
      v13 = (unsigned int)sub_1C0059AEC(a3, 6LL);
      v14 = 0;
      if ( (_DWORD)v13 == 6 )
        v14 = -1073741823;
      v6 = v14;
    }
    else
    {
      v13 = 1LL;
    }
LABEL_16:
    sub_1C001CC84(a3, v13);
    return v6;
  }
  v10 = sub_1C000F050(*(_QWORD *)(a3 + 8));
  v10[781] = 4;
  v10[8 * v10[864] + 867] = 4;
  *(_DWORD *)(a3 + 120) = 1734964085;
  *((_QWORD *)v10 + 399) = 0LL;
  KeReleaseSemaphore((PRKSEMAPHORE)(v10 + 782), 16, 1, 0);
  return v6;
}
