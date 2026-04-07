/*
 * XREFs of ?FindDxgiOutputDescriptor@CDWMDXGIAdapter@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x1800800A4
 * Callers:
 *     ?FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x18008690C (-FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMDXGIAdapter::FindDxgiOutputDescriptor(
        CDWMDXGIAdapter *this,
        HMONITOR a2,
        struct DXGIOutputInfo *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  unsigned int v5; // r10d
  __int64 v6; // r11
  __int64 v7; // rax
  _OWORD *v8; // rcx
  __int128 v9; // xmm1

  v3 = *((_DWORD *)this + 94);
  v4 = 0LL;
  v5 = -2147024809;
  if ( v3 )
  {
    v6 = *((_QWORD *)this + 44);
    while ( *(HMONITOR *)(288 * v4 + v6 + 104) != a2 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v3 )
        return v5;
    }
    v7 = 2LL;
    v8 = (_OWORD *)(v6 + 288 * v4);
    do
    {
      *(_OWORD *)a3 = *v8;
      *((_OWORD *)a3 + 1) = v8[1];
      *((_OWORD *)a3 + 2) = v8[2];
      *((_OWORD *)a3 + 3) = v8[3];
      *((_OWORD *)a3 + 4) = v8[4];
      *((_OWORD *)a3 + 5) = v8[5];
      *((_OWORD *)a3 + 6) = v8[6];
      a3 = (struct DXGIOutputInfo *)((char *)a3 + 128);
      v9 = v8[7];
      v8 += 8;
      *((_OWORD *)a3 - 1) = v9;
      --v7;
    }
    while ( v7 );
    v5 = 0;
    *(_OWORD *)a3 = *v8;
    *((_OWORD *)a3 + 1) = v8[1];
  }
  return v5;
}
