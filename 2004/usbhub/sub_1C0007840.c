/*
 * XREFs of sub_1C0007840 @ 0x1C0007840
 * Callers:
 *     sub_1C0002848 @ 0x1C0002848 (sub_1C0002848.c)
 *     sub_1C0002D20 @ 0x1C0002D20 (sub_1C0002D20.c)
 *     sub_1C00038F0 @ 0x1C00038F0 (sub_1C00038F0.c)
 *     WorkerRoutine @ 0x1C00057E0 (WorkerRoutine.c)
 *     sub_1C0005CF0 @ 0x1C0005CF0 (sub_1C0005CF0.c)
 *     sub_1C0006460 @ 0x1C0006460 (sub_1C0006460.c)
 *     sub_1C00071A0 @ 0x1C00071A0 (sub_1C00071A0.c)
 *     sub_1C00071D0 @ 0x1C00071D0 (sub_1C00071D0.c)
 *     sub_1C0016910 @ 0x1C0016910 (sub_1C0016910.c)
 *     sub_1C00169C4 @ 0x1C00169C4 (sub_1C00169C4.c)
 *     sub_1C0016A98 @ 0x1C0016A98 (sub_1C0016A98.c)
 *     sub_1C0018840 @ 0x1C0018840 (sub_1C0018840.c)
 *     sub_1C001C160 @ 0x1C001C160 (sub_1C001C160.c)
 *     sub_1C0033E18 @ 0x1C0033E18 (sub_1C0033E18.c)
 *     sub_1C0033EEC @ 0x1C0033EEC (sub_1C0033EEC.c)
 *     sub_1C0033FC4 @ 0x1C0033FC4 (sub_1C0033FC4.c)
 *     sub_1C00340A0 @ 0x1C00340A0 (sub_1C00340A0.c)
 *     sub_1C00341E8 @ 0x1C00341E8 (sub_1C00341E8.c)
 *     sub_1C00342BC @ 0x1C00342BC (sub_1C00342BC.c)
 *     sub_1C003439C @ 0x1C003439C (sub_1C003439C.c)
 *     sub_1C00344AC @ 0x1C00344AC (sub_1C00344AC.c)
 *     sub_1C0034580 @ 0x1C0034580 (sub_1C0034580.c)
 *     sub_1C0034654 @ 0x1C0034654 (sub_1C0034654.c)
 *     sub_1C0034728 @ 0x1C0034728 (sub_1C0034728.c)
 *     sub_1C00347F4 @ 0x1C00347F4 (sub_1C00347F4.c)
 *     sub_1C00348FC @ 0x1C00348FC (sub_1C00348FC.c)
 *     sub_1C00349E0 @ 0x1C00349E0 (sub_1C00349E0.c)
 *     sub_1C0034AF8 @ 0x1C0034AF8 (sub_1C0034AF8.c)
 * Callees:
 *     sub_1C0001120 @ 0x1C0001120 (sub_1C0001120.c)
 *     sub_1C0002478 @ 0x1C0002478 (sub_1C0002478.c)
 *     sub_1C0004220 @ 0x1C0004220 (sub_1C0004220.c)
 *     sub_1C0004C90 @ 0x1C0004C90 (sub_1C0004C90.c)
 *     sub_1C0005240 @ 0x1C0005240 (sub_1C0005240.c)
 *     sub_1C0007A40 @ 0x1C0007A40 (sub_1C0007A40.c)
 *     sub_1C0007F60 @ 0x1C0007F60 (sub_1C0007F60.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C000B0E0 @ 0x1C000B0E0 (sub_1C000B0E0.c)
 *     sub_1C000F4B0 @ 0x1C000F4B0 (sub_1C000F4B0.c)
 *     sub_1C00131B0 @ 0x1C00131B0 (sub_1C00131B0.c)
 *     sub_1C0013438 @ 0x1C0013438 (sub_1C0013438.c)
 *     sub_1C00195F0 @ 0x1C00195F0 (sub_1C00195F0.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0034F64 @ 0x1C0034F64 (sub_1C0034F64.c)
 *     sub_1C0035154 @ 0x1C0035154 (sub_1C0035154.c)
 *     sub_1C0035284 @ 0x1C0035284 (sub_1C0035284.c)
 *     sub_1C00354A8 @ 0x1C00354A8 (sub_1C00354A8.c)
 *     sub_1C003571C @ 0x1C003571C (sub_1C003571C.c)
 *     sub_1C0035848 @ 0x1C0035848 (sub_1C0035848.c)
 *     sub_1C0035A44 @ 0x1C0035A44 (sub_1C0035A44.c)
 *     sub_1C0035BB0 @ 0x1C0035BB0 (sub_1C0035BB0.c)
 *     sub_1C0035E78 @ 0x1C0035E78 (sub_1C0035E78.c)
 */

__int64 __fastcall sub_1C0007840(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  char v16; // [rsp+20h] [rbp-18h]

  v9 = a3;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 10, (__int64)&unk_1C0062098, a3);
  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 1346662768;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a4;
        *(_QWORD *)(v13 + 24) = v9;
      }
    }
  }
  switch ( (_DWORD)v9 )
  {
    case 0x10:
      return sub_1C0007A40(a1, a2, a4);
    case 5:
      sub_1C0007F60(a1, a2, a4);
      break;
    case 6:
      sub_1C0008570(a1, a2, a4);
      break;
    default:
      switch ( (int)v9 )
      {
        case 1:
          sub_1C0005240(a1, a2);
          break;
        case 2:
          sub_1C0004C90(a1, a2);
          break;
        case 3:
          sub_1C0004220(a1, a2, a4);
          break;
        case 4:
          sub_1C000B0E0(a1, a2, a4, a5, a6, a7);
          break;
        case 8:
          sub_1C0035BB0(a1, a2, a4);
          break;
        case 9:
          sub_1C0001120(a1, a2);
          break;
        case 10:
          sub_1C000F4B0(a1, a2, a4, a8);
          break;
        case 11:
          sub_1C0034F64(a1, a2, a4);
          break;
        case 12:
          sub_1C0013438(a1, a2);
          break;
        case 13:
          sub_1C0035A44(a1, a2, a4);
          break;
        case 14:
          sub_1C0035848(a1, a2);
          break;
        case 15:
          sub_1C00131B0(a1, a2, a4, a5, a6, a7);
          break;
        case 17:
          sub_1C00354A8(a1, a2, a4);
          break;
        case 18:
          sub_1C0002478(a1, a2, a4);
          break;
        case 19:
          sub_1C00195F0(a1, a2, a4);
          break;
        case 20:
          return sub_1C0035154(a1, a2, a4, a8);
        case 21:
          sub_1C003571C(a1, a2, a4);
          break;
        case 22:
          sub_1C0035284(a1, a2, a4);
          break;
        case 23:
          sub_1C0035E78(a1, a2, a4, a5, v16, a7);
          break;
        default:
          return a8;
      }
      break;
  }
  return a8;
}
