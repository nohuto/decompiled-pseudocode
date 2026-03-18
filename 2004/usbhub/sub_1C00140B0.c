/*
 * XREFs of sub_1C00140B0 @ 0x1C00140B0
 * Callers:
 *     sub_1C00099C0 @ 0x1C00099C0 (sub_1C00099C0.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 * Callees:
 *     sub_1C000C0F0 @ 0x1C000C0F0 (sub_1C000C0F0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C001B180 @ 0x1C001B180 (sub_1C001B180.c)
 *     sub_1C001CC84 @ 0x1C001CC84 (sub_1C001CC84.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C0059AEC @ 0x1C0059AEC (sub_1C0059AEC.c)
 */

__int64 __fastcall sub_1C00140B0(__int64 a1, unsigned int a2, __int64 a3)
{
  _DWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  void *v14; // rcx
  unsigned int v15; // eax

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 15, (__int64)&unk_1C0062110);
  if ( !a1 )
    goto LABEL_29;
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    sub_1C002DC78(a1, 0LL);
  if ( *v6 != 541218120 )
    sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
  switch ( a2 )
  {
    case 5u:
      v7 = *(_QWORD *)(a3 + 8);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 64);
        if ( !v8 )
          sub_1C002DC78(*(_QWORD *)(a3 + 8), 0LL);
        if ( *(_DWORD *)v8 != 541218120 )
          sub_1C002DC78(*(_QWORD *)(a3 + 8), *(_QWORD *)(v7 + 64));
        v9 = *(unsigned int *)(v8 + 3456);
        *(_DWORD *)(v8 + 3124) = 5;
        *(_DWORD *)(32 * v9 + v8 + 3468) = 5;
        *(_DWORD *)(a3 + 120) = 1734964085;
        *(_QWORD *)(v8 + 3192) = 0LL;
        KeReleaseSemaphore((PRKSEMAPHORE)(v8 + 3128), 16, 1, 0);
        return (unsigned int)-1073741823;
      }
LABEL_29:
      sub_1C002DC78(0LL, 0LL);
    case 7u:
      v13 = sub_1C000F050(*(_QWORD *)(a3 + 8));
      v10 = 0;
      v13[781] = 1;
      v13[8 * v13[864] + 867] = 1;
      *(_DWORD *)(a3 + 120) = 1734964085;
      *((_QWORD *)v13 + 399) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v13 + 782), 16, 1, 0);
      break;
    case 8u:
      v12 = sub_1C000F050(*(_QWORD *)(a3 + 8));
      v10 = 0;
      v12[781] = 5;
      v12[8 * v12[864] + 867] = 5;
      *(_DWORD *)(a3 + 120) = 1734964085;
      *((_QWORD *)v12 + 399) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v12 + 782), 16, 1, 0);
      sub_1C000C0F0(a1, a3, 1);
      break;
    default:
      switch ( a2 )
      {
        case 1u:
          sub_1C001CC84(a3, 5LL);
          v10 = 0;
          break;
        case 6u:
          sub_1C001CC84(a3, 5LL);
          v14 = v6 + 846;
          v10 = 0;
          KeWaitForSingleObject(v14, Executive, 0, 0, 0LL);
          v15 = sub_1C0059AEC(a3, a2);
          if ( v15 == 6 )
            v10 = -1073741823;
          sub_1C001CC84(a3, v15);
          break;
        case 9u:
          sub_1C001CC84(a3, 6LL);
          sub_1C001B180(a1);
          v10 = 0;
          break;
        default:
          sub_1C001CC84(a3, 5LL);
          return (unsigned int)-1073741823;
      }
      break;
  }
  return v10;
}
