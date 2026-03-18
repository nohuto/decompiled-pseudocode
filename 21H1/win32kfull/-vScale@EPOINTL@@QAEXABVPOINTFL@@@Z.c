/*
 * XREFs of ?vScale@EPOINTL@@QAEXABVPOINTFL@@@Z @ 0x226A07
 * Callers:
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 */

void __userpurge EPOINTL::vScale(EPOINTL *this@<ecx>, __int64 a2@<edx:eax>, const struct POINTFL *a3)
{
  __int64 v4; // rax
  int v5; // [esp+Ch] [ebp-18h] BYREF
  int v6; // [esp+10h] [ebp-14h]
  int v7[2]; // [esp+14h] [ebp-10h] BYREF
  int v8[2]; // [esp+1Ch] [ebp-8h] BYREF

  LODWORD(a2) = v8;
  ltoef_c(a2, *(_DWORD *)this, v8);
  v5 = *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 1);
  mulff3_c(v8, v8, &v5);
  LODWORD(v4) = v7;
  ltoef_c(v4, *((_DWORD *)this + 1), v7);
  v5 = *((_DWORD *)a3 + 2);
  v6 = *((_DWORD *)a3 + 3);
  mulff3_c(v7, v7, &v5);
  if ( !eftol_c(v8, (int *)this, 1) || !eftol_c(v7, (int *)this + 1, 1) )
  {
    *((_DWORD *)this + 1) = 0;
    *(_DWORD *)this = 0;
  }
}
