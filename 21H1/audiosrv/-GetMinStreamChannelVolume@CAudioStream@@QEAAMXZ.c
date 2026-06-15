/*
 * XREFs of ?GetMinStreamChannelVolume@CAudioStream@@QEAAMXZ @ 0x1800D2998
 * Callers:
 *     ?CaptureState@CVADServer@@QEAAXXZ @ 0x1800DB9D4 (-CaptureState@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CAudioStream::GetMinStreamChannelVolume(CAudioStream *this)
{
  float v1; // xmm1_4
  float *v2; // rax
  __int64 v3; // rdx
  float v4; // xmm0_4

  v1 = FLOAT_1_0;
  if ( *((_DWORD *)this + 23) )
  {
    v2 = (float *)*((_QWORD *)this + 15);
    v3 = *((unsigned int *)this + 23);
    do
    {
      v4 = *v2++;
      v1 = fminf(v4, v1);
      --v3;
    }
    while ( v3 );
  }
  return v1;
}
