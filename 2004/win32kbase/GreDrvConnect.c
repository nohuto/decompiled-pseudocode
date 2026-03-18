/*
 * XREFs of GreDrvConnect @ 0x1C01432D0
 * Callers:
 *     xxxRemoteConnect @ 0x1C011E780 (xxxRemoteConnect.c)
 * Callees:
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C00CAECC (--1SEMOBJEX@@QEAA@XZ.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C00CB040 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDrvConnect(_QWORD *a1, HSEMAPHORE a2, __int64 a3, HSEMAPHORE a4)
{
  int v5; // edi
  __int64 v6; // rdx
  int v7; // r8d
  struct _LDEV *v8; // rbx
  unsigned int (__fastcall *v9)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned int v11; // [rsp+20h] [rbp-D8h]
  HSEMAPHORE v12; // [rsp+28h] [rbp-D0h]
  unsigned int v13; // [rsp+30h] [rbp-C8h]
  _BYTE v14[96]; // [rsp+90h] [rbp-68h] BYREF

  v5 = 0;
  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v14,
    a2,
    a3,
    a4,
    v11,
    v12,
    v13,
    (HSEMAPHORE)ghsemSprite,
    5u,
    ghsemHT,
    6u,
    (HSEMAPHORE)ghsemDriverMgmt,
    0xDu);
  v8 = gpldevDrivers;
  do
  {
    if ( !v8 )
      break;
    if ( *((_QWORD *)v8 + 2) )
    {
      if ( *((_DWORD *)v8 + 6) == 1 )
      {
        v9 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v8 + 112) + 616LL);
        if ( v9 )
        {
          if ( v9(a1[3], a1[2], a1[1], a1[4]) )
          {
            *((_DWORD *)v8 + 15) = 1;
          }
          else
          {
            *((_DWORD *)v8 + 15) = 4;
            v5 = -2143354875;
          }
        }
      }
    }
    v8 = *(struct _LDEV **)v8;
  }
  while ( v5 >= 0 );
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v14, v6, v7);
  return (unsigned int)v5;
}
