/*
 * XREFs of ?GetRandomOrientation@CParticleGenerator@@QEBA?AUfloat4@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x1801E151C
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z @ 0x1801E0668 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x1801DD144 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 *     ?GetRandomUnitDir@@YA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@AEBU1234@1_N@Z @ 0x1801E17F0 (-GetRandomUnitDir@@YA-AUfloat3@Numerics@Foundation@Windows@@AEAV-$mersenne_twister_engine@I$0CA@.c)
 */

__int64 __fastcall CParticleGenerator::GetRandomOrientation(__int64 a1, __int64 a2, __int64 a3)
{
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  __int64 RandomUnitDir; // rax
  __int64 v8; // xmm0_8
  __int64 result; // rax
  int v10; // [rsp+40h] [rbp-1h]
  _BYTE v11[24]; // [rsp+58h] [rbp+17h] BYREF

  v4 = *(float *)(a1 + 144);
  v5 = *(float *)(a1 + 128);
  v6 = (float)(std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a3)
             * (float)(v4 - v5))
     + v5;
  RandomUnitDir = GetRandomUnitDir((struct D2DVector3 *)v11, 1);
  v8 = *(_QWORD *)RandomUnitDir;
  LODWORD(RandomUnitDir) = *(_DWORD *)(RandomUnitDir + 8);
  *(_DWORD *)a2 = v8;
  v10 = RandomUnitDir;
  result = a2;
  *(float *)(a2 + 12) = v6;
  *(_DWORD *)(a2 + 8) = v10;
  *(_DWORD *)(a2 + 4) = HIDWORD(v8);
  return result;
}
